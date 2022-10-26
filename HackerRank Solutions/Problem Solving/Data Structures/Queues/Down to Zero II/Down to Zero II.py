#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'downToZero' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER n as parameter.
#

def downToZero(n):
    # Write your code here
    if n == 0:
        return 0
    Q = [(n, 0)]
    setQ = [0] * n
    while Q:
        n, steps = Q.pop(0)
        if n == 1:
            return steps + 1
        div = int(math.sqrt(n))
        while div > 1:
            if n % div == 0 and not setQ[n // div]:
                Q.append((n // div, steps + 1))
                setQ[n // div] = 1
            div -= 1
        if not setQ[n-1]:
            Q.append((n-1, steps+1))
            setQ[n-1] = 1

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    for q_itr in range(q):
        n = int(input().strip())

        result = downToZero(n)

        fptr.write(str(result) + '\n')

    fptr.close()
