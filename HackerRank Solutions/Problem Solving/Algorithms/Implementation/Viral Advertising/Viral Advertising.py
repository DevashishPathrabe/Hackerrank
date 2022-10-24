#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the viralAdvertising function below.
def viralAdvertising(n):
    shared = 6
    liked = 0
    cumulativeLikes = 2
    for i in range(2,n+1):
        liked = math.floor(shared/2)
        shared = liked*3
        cumulativeLikes += liked
    return cumulativeLikes
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    result = viralAdvertising(n)

    fptr.write(str(result) + '\n')

    fptr.close()
