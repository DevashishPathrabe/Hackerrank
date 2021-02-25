#!/bin/python3

import os
import sys

# Complete the solve function below.
def solve(steps):
    k = [*zip(*steps)]
    return (min(k[0])*min(k[1]))
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    steps = []

    for _ in range(n):
        steps.append(list(map(int, input().rstrip().split())))

    result = solve(steps)

    fptr.write(str(result) + '\n')

    fptr.close()
