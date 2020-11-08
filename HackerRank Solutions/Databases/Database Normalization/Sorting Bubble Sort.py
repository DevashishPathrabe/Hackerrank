#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countSwaps function below.
def countSwaps(a):
    numSwap = 0
    for i in range(n):
        for j in range(0,n-i-1):
            if(a[j] > a[j+1]):
                a[j], a[j+1] = a[j+1], a[j]
                numSwap = numSwap + 1   
    print ("Array is sorted in", numSwap, "swaps.")
    print ("First Element:", a[0])
    print ("Last Element:", a[n-1]) 
if __name__ == '__main__':
    n = int(input())

    a = list(map(int, input().rstrip().split()))

    countSwaps(a)
