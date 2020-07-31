#!/bin/python3

import os
import sys
import math
#
# Complete the restaurant function below.
#
def restaurant(l, b):
    #
    # Write your code here.
    #
    x = math.gcd(l,b)
    return (int)(l/x*b/x)
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        lb = input().split()

        l = int(lb[0])

        b = int(lb[1])

        result = restaurant(l, b)

        fptr.write(str(result) + '\n')

    fptr.close()
