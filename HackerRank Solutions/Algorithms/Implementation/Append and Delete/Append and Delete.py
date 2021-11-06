#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'appendAndDelete' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. STRING s
#  2. STRING t
#  3. INTEGER k
#

def appendAndDelete(s, t, k):
    # Write your code here
    start = 0
    ind = 0
    toDel = 0
    toApp = 0
    while ind < len(s) and ind < len(t) and s[ind] == t[ind]:
        ind += 1
    start = ind
    if start < len(s):
        toDel = len(s[start:])
        if toDel == len(s) and k - toDel >= len(t):
            return 'Yes'
    if start < len(t):
        toApp = len(t[start:])
    k -= toDel + toApp
    if k == 0 or (k > 0 and k % 2 == 0) or k >= 2*len(t):
        return 'Yes'
    else:
        return 'No'
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    t = input()

    k = int(input().strip())

    result = appendAndDelete(s, t, k)

    fptr.write(result + '\n')

    fptr.close()
