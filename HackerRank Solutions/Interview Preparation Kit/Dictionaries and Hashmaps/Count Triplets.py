#!/bin/python3

import math
import os
import random
import re
import sys
from collections import defaultdict

# Complete the countTriplets function below.
def countTriplets(arr, r):
    m1, m2 = defaultdict(int), defaultdict(int)
    triplets = 0
    for i in reversed(arr):
        if((i*r) in m2):
            triplets += m2[i * r]
        if((i*r) in m1):
            m2[i] += m1[i * r]
        m1[i] += 1
    return(triplets)
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nr = input().rstrip().split()

    n = int(nr[0])

    r = int(nr[1])

    arr = list(map(int, input().rstrip().split()))

    ans = countTriplets(arr, r)

    fptr.write(str(ans) + '\n')

    fptr.close()
