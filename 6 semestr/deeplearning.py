import torch
import torch.nn as nn
import numpy as np

class TwoHiddenLayerModel(nn.Module):
    def __init__(self, input_size, hidden_size, hidden_size2, output_size):
        super().__init__()#разобраться
        self.fc1 = nn.Linear(input_size,hidden_size)
        self.relu1 = nn.ReLU()
        self.fc2 = nn.Linear(hidden_size, hidden_size2)
        self.relu2 = nn.ReLU()
        self.fc3 = nn.Linear(hidden_size2, output_size)
        self.softmax = nn.Softmax(dim=1)

    def forward(self, x):
        out = self.fc1(x)
        out = self.relu1(out)
        out = self.fc2(out)
        out = self.relu2(out)
        out = self.fc3(out)
        out = self.softmax(out)
        return out

input_size = 4
hidden_size_1 = 8
hidden_size_2 = 6
output_size = 3
learning_rate = 0.001
num_epoch = 100

model = TwoHiddenLayerModel(input_size, hidden_size_1, hidden_size_2, output_size)
criterion = nn.CrossEntropyLoss()
optimizer = torch.optim.Adam(model.parameters(), learning_rate)

np.random.seed(0)
x = np.random.rand(100, input_size).astype(np.float32)
# print(x)
y = np.random.randint(output_size, size=100)
# print(y)
x = torch.from_numpy(x)
y = torch.from_numpy(y).long()

for epoch in range(num_epoch):
    optimizer.zero_grad()
    out = model(x)
    loss = criterion(out, y)
    loss.backward()
    optimizer.step()
    if (epoch + 1) % 10 == 0:
        print(f"Эпоха[{epoch + 1}], Потери: {loss.item():.4f}")

x_test = np.random.rand(10, input_size).astype(np.float32)
x_test = torch.from_numpy(x_test)
prediction = model(x_test)
# print(prediction)

predict = torch.max(prediction,1)
print(predict)



