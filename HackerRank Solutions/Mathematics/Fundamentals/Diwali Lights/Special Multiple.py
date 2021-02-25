#!/bin/python3

import os
import sys
from itertools import product
# Complete the solve function below.
def solve(n):
    i = 0
    while True:
        for j in product(*[[0,9]]*i) or [9]:
            s = "9"+"".join(map(str,j))
            if(not int(s)%n):
                return s
        i+=1
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = solve(n)

        fptr.write(result + '\n')

    fptr.close()
