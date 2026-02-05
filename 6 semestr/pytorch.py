import numpy as np
import torch

empty_tensor = torch.empty(3,3)
# print(empty_tensor)

tensor_from_list = torch.tensor([1,2,3,4,5])
print(tensor_from_list)

tensor_from_matrix = torch.tensor([[1,2,3],[4,5,6]])
print(tensor_from_matrix)

array_np = np.array([1,2,3,4,5])
tensor_from_np = torch.tensor(array_np)
print(tensor_from_np)

ones_tensor = torch.ones(3,3)
print(ones_tensor)

zeros_tensor = torch.zeros(3,3)
print(zeros_tensor)