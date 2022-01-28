# Enter your code here. Read input from STDIN. Print output to STDOUT
def weightedMean(values:list, weights:list) -> float:
    sumWeightedValues = 0
    sumWeights = 0
    for i in range(len(values)):
        value = values[i]
        weight = weights[i]
        sumWeightedValues += value * weight
        sumWeights += weight
    result = sumWeightedValues / sumWeights
    return result
n = int(input())
x = [int(i) for i in input().split()]
w = [int(i) for i in input().split()]
print(round(weightedMean(x, w), 1))