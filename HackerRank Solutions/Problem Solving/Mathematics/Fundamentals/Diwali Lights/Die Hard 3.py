#!/bin/python3

import os
import sys
def gcd(a, b):
    while(a%b != 0):
        temp = a%b
        a = b
        b = temp
    return b
# Complete the solve function below.
def solve(a, b, c):
    if(c <= max(a,b) and c%gcd(a,b) == 0):
        return "YES"
    return "NO"
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        abc = input().split()

        a = int(abc[0])

        b = int(abc[1])

        c = int(abc[2])

        result = solve(a, b, c)

        fptr.write(result + '\n')

    fptr.close()
