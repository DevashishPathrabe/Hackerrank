#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'marcsCakewalk' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts INTEGER_ARRAY calorie as parameter.
#

def marcsCakewalk(calorie):
    return sum(calorie[i]*2**i for i in range(len(calorie)))
input()
calorie = sorted(map(int, input().split()), reverse=True)
print(marcsCakewalk(calorie))