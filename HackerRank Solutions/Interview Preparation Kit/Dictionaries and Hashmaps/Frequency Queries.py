#!/bin/python3

import math
import os
import random
import re
import sys
from collections import defaultdict
# Complete the freqQuery function below.
def freqQuery(queries):
    elementFrequency = defaultdict(int)
    frequencyCount = defaultdict(int)
    array = []
    for i, j in queries:
        if(i == 1):
            if(frequencyCount[elementFrequency[j]]):
                frequencyCount[elementFrequency[j]] -= 1
            elementFrequency[j] += 1
            frequencyCount[elementFrequency[j]] += 1
        elif(i == 2):
            if(elementFrequency[j]):
                frequencyCount[elementFrequency[j]] -= 1
                elementFrequency[j] -= 1
                frequencyCount[elementFrequency[j]] += 1
        else:
            if(j in frequencyCount and frequencyCount[j]):
                array.append(1)
            else:
                array.append(0)
    return array
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    queries = []

    for _ in range(q):
        queries.append(list(map(int, input().rstrip().split())))

    ans = freqQuery(queries)

    fptr.write('\n'.join(map(str, ans)))
    fptr.write('\n')

    fptr.close()
