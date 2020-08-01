#!/bin/python3

import os
import sys
import math
#
# Complete the closestNumber function below.
#
def closestNumber(a, b, x):
    #
    # Write your code here.
    #
    leftDiffernce = (math.floor((a**b)/x)*x)
    rightDifference = (math.ceil((a**b)/x)*x)
    if((a**b)-leftDiffernce < rightDifference-(a**b)):
        return (leftDiffernce)
    return (rightDifference)
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        abx = input().split()

        a = int(abx[0])

        b = int(abx[1])

        x = int(abx[2])

        result = closestNumber(a, b, x)

        fptr.write(str(result) + '\n')

    fptr.close()
