#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter
#
# Complete the 'gameOfThrones' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def gameOfThrones(s):
    # Write your code here
    count = Counter(s)
    if len(s)%2 == 0:
        result = all([x%2 == 0 for x in count.values()])
    else:
        if len(list(filter(lambda x: x%2 == 1, count.values()))) == 1:
            result = True
        else:
            result = False
    if result:
        return 'YES'
    else:
        return 'NO'

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = gameOfThrones(s)

    fptr.write(result + '\n')

    fptr.close()
