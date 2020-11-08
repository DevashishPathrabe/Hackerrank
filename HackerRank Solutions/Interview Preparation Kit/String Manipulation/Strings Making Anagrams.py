#!/bin/python3

import math
import os
import random
import re
import sys

CHARS = 26
# Complete the makeAnagram function below.
def makeAnagram(a, b):
    count = [0]*CHARS
    i=0
    while(i < len(a)):
        count[ord(a[i]) - ord('a')] += 1
        i += 1
    i=0
    while(i < len(b)):
        count[ord(b[i]) - ord('a')] -= 1
        i += 1
    result=0
    for i in range(26):
        result+= abs(count[i])
    return result;

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = input()

    b = input()

    result = makeAnagram(a, b)

    fptr.write(str(result) + '\n')

    fptr.close()
