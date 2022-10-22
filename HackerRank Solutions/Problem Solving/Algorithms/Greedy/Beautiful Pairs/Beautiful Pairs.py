#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter
#
# Complete the 'beautifulPairs' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY A
#  2. INTEGER_ARRAY B
#

def beautifulPairs(A, B):
    # Write your code here
    result = 0
    a = sorted(A)
    b = sorted(B)
    acount = Counter(a)
    bcount = Counter(b)
    spare = 0
    for i in acount.items():
        if i[0] in bcount:
            get = bcount[i[0]]
            result += min(i[1], get)
        else:
            spare += i[1]
    if spare:
        result += 1
    else:
        result -= 1
    return result

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    A = list(map(int, input().rstrip().split()))

    B = list(map(int, input().rstrip().split()))

    result = beautifulPairs(A, B)

    fptr.write(str(result) + '\n')

    fptr.close()
