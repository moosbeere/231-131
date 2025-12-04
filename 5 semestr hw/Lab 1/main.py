# создание простейшей нейросети
# def neuralNetwork(inp, weights, bias):
#     prediction = inp * weights + bias
#     return prediction
#
# inputs = [150, 160, 170, 180, 190]
# for i in range(len(inputs)):
#     print(neuralNetwork(inputs[i], 0.3, 3))

# два входных нейрона и один выходной
# def neuralNetwork(inps, weights):
#     prediction = 0
#     value = [0] * len(inps)
#     for i in range(len(weights)):
#         value[i] = inps[i] * weights[i]
#         prediction += inps[i] * weights[i]
#     return prediction, value
#
# prediction, value = neuralNetwork([1,3], [0.2, 0.4])
# print(prediction)
# print(value)


# out_1 = neuralNetwork([10, 4], [0.5, 0.3])
# out_2 = neuralNetwork([7, 9], [0.1, 0.2])

#один входной и два на выход
# def neuralNetwork(inp, weights):
#     prediction = [0,0]
#     for i in range(len(weights)):
#         prediction[i] = inp * weights[i]
#     return prediction
# weights = [0.1, 0.2]
# while(True):
#     prediction = neuralNetwork(5, weights)
#     if (prediction[0] >= 0.5 and prediction[1] >= 0.5): break
#     if(prediction[0] < 0.5): weights[0] += 0.01
#     if(prediction[1] < 0.5): weights[1] += 0.01
#
# print(prediction)
# print(weights)

#два входных и два на выход
def neuralNetwork(inps, weights):
    prediction = [0] * len(weights)
    for i in range(len(weights)):
        ws = 0
        for j in range(len(inps)):
            ws += inps[j] * weights[i][j]
        prediction[i] = ws
    return prediction

inp = [50, 165, 45]
weight_1 = [0.2, 0.1, 0.65]
weight_2 = [0.3, 0.1, 0.7]
weights_3 = [0.5, 0.4, 0.34]
weights_4 = [0.4, 0.2, 0.1]

weights = [weight_1, weight_2, weights_3, weights_4]

out_1 = neuralNetwork(inp, weights)

print(out_1)


#добавляем скрытый слой
# def neuralNetwork(inps, weights):
#     prediction_h = [0] * len(weights[0])
#     for i in range(len(weights)):
#         ws = 0
#         for j in range(len(inps)):
#             ws += inps[j] * weights[0][i][j]
#         prediction_h[i] = ws
#     prediction_out = [0] * len(weights[1])
#     for i in range(len(weights)):
#         ws = 0
#         for j in range(len(prediction_h)):
#             ws += prediction_h[j] * weights[1][i][j]
#         prediction_out[i] = ws
#     return prediction_out
#
#
# inp = [23, 45]
# weight_h_1 = [0.4, 0.1]
# weight_h_2 = [0.3, 0.2]
#
# weight_out_1 = [0.4, 0.1]
# weight_out_2 = [0.3, 0.1]
#
# weight_h = [weight_h_1, weight_h_2]
# weight_out = [weight_out_1, weight_out_2]
#
# weights = [weight_h, weight_out]
#
# out_1 = neuralNetwork(inp, weights)
#
# print(out_1)
