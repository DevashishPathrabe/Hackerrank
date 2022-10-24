#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter
#
# Complete the 'missingNumbers' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER_ARRAY arr
#  2. INTEGER_ARRAY brr
#

def missingNumbers(arr, brr):
    # Write your code here
    acount = Counter(arr)
    bcount = Counter(brr)
    for el in acount.items():
        get = bcount.get(el[0])
        if get:
            bcount[el[0]] -= el[1]
    bcount = list(map(lambda x: x[0], (filter(lambda x: x[1] > 0, bcount.items()))))
    bcount = sorted(bcount)
    return bcount

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    m = int(input().strip())

    brr = list(map(int, input().rstrip().split()))

    result = missingNumbers(arr, brr)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
