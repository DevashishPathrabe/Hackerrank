#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the candies function below.
def candies(n, arr):
    candies = [1]*n
    for i in range(n-1):
        if arr[i+1]>arr[i]:
            candies[i+1] = candies[i]+1
    for i in range(n-1,0,-1):
        if arr[i-1]>arr[i] and candies[i-1]<=candies[i]:
            candies[i-1] = candies[i]+1
    return sum(candies)
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = []

    for _ in range(n):
        arr_item = int(input())
        arr.append(arr_item)

    result = candies(n, arr)

    fptr.write(str(result) + '\n')

    fptr.close()
