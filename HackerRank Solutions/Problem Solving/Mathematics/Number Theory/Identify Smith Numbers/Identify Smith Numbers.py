#!/bin/python3

import os
import sys
from math import sqrt
# Complete the solve function below.
def getPrime(n):
    if(not n%2):
        return 2
    for i in range(3, int(sqrt(n))+1, 2):
        if(not n%i):
            return i
    return n
def solve(n):
    x, Sum = 0, sum(map(int,str(n)))
    while(n != 1):
        p = getPrime(n)
        while(not n%p):
            x += sum(map(int,str(p)))
            n = n//p
    if(x == Sum):
        return 1
    else:
        return 0
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    result = solve(n)

    fptr.write(str(result) + '\n')

    fptr.close()
