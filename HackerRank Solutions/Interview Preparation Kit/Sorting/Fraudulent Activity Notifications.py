#!/bin/python3

import math
import os
import random
import re
import sys
from bisect import bisect_left, insort_left
# Complete the activityNotifications function below.
def activityNotifications(expenditure, d):
    notifications = 0
    runningMedian = sorted(expenditure[:d])
    for i, element in enumerate(expenditure):
        if(i < d):
            continue
        if(d%2 == 1):
            median = runningMedian[d//2]
        else:
            median = (runningMedian[d//2 - 1] + runningMedian[d//2]) / float(2)
        if(element >= median*2):
            notifications += 1
        del runningMedian[bisect_left(runningMedian, expenditure[i-d])]
        insort_left(runningMedian, element)
    return notifications
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nd = input().split()

    n = int(nd[0])

    d = int(nd[1])

    expenditure = list(map(int, input().rstrip().split()))

    result = activityNotifications(expenditure, d)

    fptr.write(str(result) + '\n')

    fptr.close()
