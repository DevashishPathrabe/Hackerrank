#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the isValid function below.
def isValid(s):
    frequency = [s.count(letter) for letter in set(s) ]
    if(max(frequency)-min(frequency) == 0):
        return('YES')
    elif(frequency.count(max(frequency)) == 1 and max(frequency)-min(frequency) == 1):
        return('YES')
    elif(frequency.count(min(frequency)) == 1):
        frequency.remove(min(frequency))
        if(max(frequency)-min(frequency) == 0):
            return('YES')
        else:
            return('NO')
    else:
        return('NO')
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = isValid(s)

    fptr.write(result + '\n')

    fptr.close()
