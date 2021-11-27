#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'nimbleGame' function below.
#
# The function is expected to return a STRING.
# The function accepts INTEGER_ARRAY s as parameter.
#

def nimbleGame(s):
    # Write your code here
    if len(s) > 1:
        result = 0
        for i, j in enumerate(s):
            if j % 2 == 1:
                result ^= i
    else:
        return 'Second'
    if result == 0:
        return 'Second'
    else:
        return 'First'

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        s = list(map(int, input().rstrip().split()))

        result = nimbleGame(s)

        fptr.write(result + '\n')

    fptr.close()
