#!/bin/python3

import math
import os
import random
import re
import sys
from math import sqrt
# Complete the primality function below.
def primality(n):
    if(not n%2 and n!=2 or n==1):
        return "Not prime"
    for i in range(3, int(sqrt(n))+1, 2):
        if(not n%i):
            return "Not prime"
    return "Prime"
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    p = int(input())

    for p_itr in range(p):
        n = int(input())

        result = primality(n)

        fptr.write(result + '\n')

    fptr.close()
