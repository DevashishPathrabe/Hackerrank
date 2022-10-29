#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def plusMinus(arr):
    # Write your code here
    countPositive, countNegative, countZero = 0, 0, 0
    for i in range(len(arr)):
        if arr[i] < 0:
            countNegative += 1
        if arr[i] == 0:
            countZero += 1
        if arr[i] > 0:
            countPositive += 1
    print ('%.6f' %(countPositive/len(arr)))
    print ('%.6f' %(countNegative/len(arr)))
    print ('%.6f' %(countZero/len(arr)))

if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
