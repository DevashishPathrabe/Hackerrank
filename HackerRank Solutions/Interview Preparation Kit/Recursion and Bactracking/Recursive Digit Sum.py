#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the superDigit function below.
def superDigit(n, k):
    digits = map(int, list(n))
    return getSuperDigit(str(sum(digits) * k))
def getSuperDigit(p):
    if(len(p) == 1):
        return int(p)
    else:
        digits = map(int, list(p))
        return getSuperDigit(str(sum(digits)))
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = nk[0]

    k = int(nk[1])

    result = superDigit(n, k)

    fptr.write(str(result) + '\n')

    fptr.close()
