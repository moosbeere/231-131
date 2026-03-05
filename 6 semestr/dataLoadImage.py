import torch
import torch.nn as nn
from torch.optim import Adam
from torchvision.datasets import CIFAR10
import torchvision.transforms as transforms
from torch.utils.data import DataLoader
import torch.nn.functional as F

root = "./Data_10"
batch_size = 10

transformations = transforms.Compose([
    transforms.ToTensor(),
    transforms.Normalize((0.5,0.5,0.5),(0.5, 0.5, 0.5))
])
train_set = CIFAR10(train=True, transform=transformations, root=root, download=True)
train_data_loader = DataLoader(train_set, batch_size=batch_size, shuffle=True)
test_set = CIFAR10(train=False, transform=transformations, root=root, download=True)
test_data_loader = DataLoader(test_set, batch_size=batch_size, shuffle=False)
# for (images,labels) in train_data_loader:
#     print(images.shape)
#     break

class Image(nn.Module):
    def __init__(self):
        super(Image, self).__init__()
        self.conv1 = nn.Conv2d(in_channels = 3, out_channels = 12, kernel_size = 5, stride = 1, padding=1)
        self.bn1 = nn.BatchNorm2d(12)
        self.pool = nn.MaxPool2d(2, 2)
        self.conv2 = nn.Conv2d(in_channels=12, out_channels=24, kernel_size=5, stride=1, padding=1)
        self.bn2 = nn.BatchNorm2d(24)
        self.conv3 = nn.Conv2d(in_channels=24, out_channels=24, kernel_size=5, stride=1, padding=1)
        self.bn3 = nn.BatchNorm2d(24)
        self.conv4 = nn.Conv2d(in_channels=24, out_channels=24, kernel_size=5, stride=1, padding=1)
        self.bn4 = nn.BatchNorm2d(24)
        self.fc = nn.Linear(24*10*10, 10)

    def forward(self, inp):
        out = F.relu(self.bn1(self.conv1(inp)))
        out = F.relu(self.bn2(self.conv2(out)))
        out = self.pool(out)
        out = F.relu(self.bn3(self.conv3(out)))
        out = F.relu(self.bn4(self.conv4(out)))
        out = out.view(-1, 24*10*10)
        return self.fc(out)


model = Image()

def test_acccuracy():
    model.eval()
    accuracy = 0
    total = 0
    for data_test in test_data_loader:
        images, labels = data_test
        # print(labels)
        # break
        output = model(images)
        predict = torch.max(output.data, 1)[1]
        accuracy += (predict == labels).sum().item()
        total += labels.size(0)
    return 100 * accuracy/total

classes=['airplane', 'automobile', 'bird', 'cat', 'deer', 'dog', 'frog', 'horse', 'ship', 'truck']

# print(test_acccuracy())
loss = nn.CrossEntropyLoss()
optimizer = Adam(model.parameters(), lr=0.001, weight_decay = 0.0001)

num_epochs = 3
best_accuracy = 0.0
model_save_path = "./LearnModel.pth"
model.train()
for epoch in range(num_epochs):
    for i, (images, labels) in enumerate(train_data_loader, 0):
        optimizer.zero_grad()
        output = model(images)
        error = loss(output, labels)
        error.backward()
        optimizer.step()
    accuracy = test_acccuracy()
    if(accuracy > best_accuracy):
        best_accuracy = accuracy
        torch.save(model.state_dict(), model_save_path)
    print('Epoch: %d, Accuracy: %d%%' %(epoch+1, accuracy))
