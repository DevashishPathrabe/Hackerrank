#!/bin/python3

import sys

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
# Write Your Code Here
def swap(x, y):
    temp = x
    x = y
    y = temp
    return(x, y)
numSwaps = 0
for i in range(n-1):
    count = 0
    for j in range(n-1):
        if (a[j] > a[j+1]):
            a[j], a[j+1] = swap(a[j], a[j+1])
            count = count+1
    if (count == 0):
        break;
    else :
        numSwaps = numSwaps + count
print("Array is sorted in %r swaps."%numSwaps) 
print("First Element: %r"%a[0])
print("Last Element: %r"%a[n-1])