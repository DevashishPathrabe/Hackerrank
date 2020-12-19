#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter
# Complete the reverseShuffleMerge function below.
def reverseShuffleMerge(s):
    charCount = Counter(s)
    stringChars = {
        char: int(count/2) for char, count in charCount.items() 
    }
    shuffledChars = { 
        char: int(count/2) for char, count in charCount.items() 
    }
    string = []   
    for char in reversed(s):
        if(stringChars[char] > 0):
            while(string and string[-1] > char and shuffledChars[string[-1]] > 0):
                removed = string.pop()
                stringChars[removed] += 1
                shuffledChars[removed] -= 1
            string.append(char)
            stringChars[char] -= 1
        else:
            shuffledChars[char] -= 1
    return ''.join(string)
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = reverseShuffleMerge(s)

    fptr.write(result + '\n')

    fptr.close()
