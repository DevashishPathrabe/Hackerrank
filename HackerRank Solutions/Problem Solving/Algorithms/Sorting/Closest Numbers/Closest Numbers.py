#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'closestNumbers' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY arr as parameter.
#

def closestNumbers(arr):
    # Write your code here
    output = []
    arr = sorted(arr)
    nowmin = 10**9
    for i in range(1, len(arr)):
        difference = abs(arr[i-1] - arr[i])
        if difference < nowmin:
            output = [(arr[i-1], arr[i])]
            nowmin = difference
        elif difference == nowmin:
            output.append((arr[i-1], arr[i]))
    flatList = [item for sublist in output for item in sublist]
    return flatList

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = closestNumbers(arr)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
