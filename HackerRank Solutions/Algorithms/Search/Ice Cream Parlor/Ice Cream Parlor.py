#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter
#
# Complete the 'icecreamParlor' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER m
#  2. INTEGER_ARRAY arr
#

def icecreamParlor(m, arr):
    # Write your code here
    costs = Counter(arr)
    half = m/2
    comb = set()
    for cost in costs:
        if (cost != half and m-cost in costs) or (cost == half and costs[cost] > 1):
            comb.add(cost)
    for i, cost in enumerate(arr, 1):
        if cost in comb:
            yield i

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        m = int(input().strip())

        n = int(input().strip())

        arr = list(map(int, input().rstrip().split()))

        result = icecreamParlor(m, arr)

        fptr.write(' '.join(map(str, result)))
        fptr.write('\n')

    fptr.close()
