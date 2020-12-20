#!/bin/python3

import math
import os
import random
import re
import sys
from math import ceil
from collections import Counter
# Complete the minTime function below.
def minTime(machines, goal):
    c = Counter(machines)
    fastest = min(c)
    minDays = 1
    maxDays = ceil((fastest*goal)/c[fastest])
    while(maxDays-minDays > 1):
        mid = (minDays+maxDays)//2
        output = sum((mid//x)*y for x,y in c.items())
        if(output < goal):
            minDays = mid
        else:
            maxDays = mid
    return maxDays
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nGoal = input().split()

    n = int(nGoal[0])

    goal = int(nGoal[1])

    machines = list(map(int, input().rstrip().split()))

    ans = minTime(machines, goal)

    fptr.write(str(ans) + '\n')

    fptr.close()
