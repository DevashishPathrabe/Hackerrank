#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter 
# Complete the sherlockAndAnagrams function below.
def sherlockAndAnagrams(s):
    count = Counter(("".join(sorted(s[j:j+i])) for i in range(1,len(s)) for j in range(0,len(s)-i+1)))
    return sum(sum(range(i)) for i in count.values())
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        s = input()

        result = sherlockAndAnagrams(s)

        fptr.write(str(result) + '\n')

    fptr.close()
