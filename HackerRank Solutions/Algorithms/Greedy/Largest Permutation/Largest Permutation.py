#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'largestPermutation' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER k
#  2. INTEGER_ARRAY arr
#

def largestPermutation(k, arr):
    # Write your code here
    maxcurrent = max(arr)
    positions = {}
    for i in range(len(arr)):
        positions[arr[i]] = i
    for i in range(len(arr)):
        if k == 0:
            break
        if arr[i] == maxcurrent:
            maxcurrent -= 1
        if arr[i] < maxcurrent:
            mi = positions[maxcurrent]
            positions[maxcurrent], positions[arr[i]] = positions[arr[i]], positions[maxcurrent]
            arr[i], arr[mi] = arr[mi], arr[i]
            maxcurrent -= 1
            k -= 1
    return arr

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    result = largestPermutation(k, arr)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
