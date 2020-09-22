# Enter your code here. Read input from STDIN. Print output to STDOUT
def getMean(list):
    sum = 0
    for i in list:
        sum += i
    mean = float(sum) / len(list)
    return mean
def getMedian(list):
    median = 0.0
    list.sort()
    if(size % 2 == 0):
        median = float(list[size//2 - 1] + list[len(list)//2]) / 2
    else:
        median = list[(size-1)/2]
    return median
def getMode(list):
    mode = 0
    count, max = 0, 0
    list.sort()
    current = 0
    for i in list:
        if (i == current):
            count += 1
        else:
            count = 1
            current = i
        if (count > max):
            max = count
            mode = i
    return mode
size = int(input())
a = list(map(int, input().split()))
print(getMean(a))
print(getMedian(a))
print(getMode(a))