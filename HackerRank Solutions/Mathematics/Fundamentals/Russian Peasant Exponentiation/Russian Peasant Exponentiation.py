#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'solve' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER a
#  2. INTEGER b
#  3. LONG_INTEGER k
#  4. INTEGER m
#

def solve(a, b, k, m):
    # Write your code here
    if k == 1:
        return a%m, b%m
    else:
        c, d = ((a*a) % m - (b*b) % m) % m, (2*a*b) % m
        x, y = solve(c, d, k//2, m)
        if k % 2:
            e, f = (a*x - b*y) % m, (a*y + b*x) % m
            x, y = e, f
        return x, y

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    for q_itr in range(q):
        first_multiple_input = input().rstrip().split()

        a = int(first_multiple_input[0])

        b = int(first_multiple_input[1])

        k = int(first_multiple_input[2])

        m = int(first_multiple_input[3])

        result = solve(a, b, k, m)

        fptr.write(' '.join(map(str, result)))
        fptr.write('\n')

    fptr.close()
