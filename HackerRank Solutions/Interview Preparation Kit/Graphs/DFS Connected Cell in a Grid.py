#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the maxRegion function below.
def maxRegion(grid):
    def helper(i, j):
        if(0 <= i < len(grid) and 0 <= j < len(grid[i]) and grid[i][j] == 1):
            grid[i][j] = 0
            return 1+sum(helper(i2,j2) for i2 in range(i-1,i+2) for j2 in range(j-1,j+2))
        return 0
    return max(helper(i,j) for i in range(n) for j in range(m))
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    m = int(input())

    grid = []

    for _ in range(n):
        grid.append(list(map(int, input().rstrip().split())))

    res = maxRegion(grid)

    fptr.write(str(res) + '\n')

    fptr.close()
