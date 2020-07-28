#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the utopianTree function below.
def utopianTree(n):
    boolean = False
    height = 0
    for i in range(n+1):
        if(boolean == False):
            height += 1
            boolean = True
        else:
            height *= 2
            boolean=False
    return height
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = utopianTree(n)

        fptr.write(str(result) + '\n')

    fptr.close()
