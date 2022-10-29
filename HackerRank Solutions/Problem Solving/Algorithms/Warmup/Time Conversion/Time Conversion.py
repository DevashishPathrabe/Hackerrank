#!/bin/python3

import math
import os
import random
import re
import sys
import datetime
#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s):
    # Write your code here
    t = datetime.datetime.strptime(s, "%I:%M:%S%p")
    return datetime.datetime.strftime(t, "%H:%M:%S")

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    fptr.write(result + '\n')

    fptr.close()
