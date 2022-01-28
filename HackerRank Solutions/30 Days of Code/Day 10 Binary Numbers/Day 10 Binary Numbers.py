#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input())
    count, maxNumberOf1 = 0, 0
    while(n > 0):
        if(n%2 == 1):
            count += 1
        else:
            count = 0
        if(maxNumberOf1 < count):
            maxNumberOf1 = count
        n >>= 1
    print(maxNumberOf1)