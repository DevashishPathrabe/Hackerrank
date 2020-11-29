#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the pairs function below.
def pairs(k, arr):
    arr.sort()
    left = 0
    right = 1
    noOfPairs = 0
    while(right < len(arr)):
        difference = arr[right]-arr[left]
        if(difference == k):
            noOfPairs += 1
            left += 1
            right += 1
        elif(difference < k):
            right += 1
        else:
            left += 1
            if(left == right):
                right += 1
    return noOfPairs
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = int(nk[0])

    k = int(nk[1])

    arr = list(map(int, input().rstrip().split()))

    result = pairs(k, arr)

    fptr.write(str(result) + '\n')

    fptr.close()
