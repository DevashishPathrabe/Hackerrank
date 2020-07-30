#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the findDigits function below.
def findDigits(n):
    divisorOfn = 0
    t = n
    while(n > 0):
        digit = n % 10
        n = n//10
        if(digit == 0):
            continue
        if(t % digit == 0):
            divisorOfn += 1
    return divisorOfn
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = findDigits(n)

        fptr.write(str(result) + '\n')

    fptr.close()
