#!/bin/python3

import math

def lowestTriangle(base, area):
    # Complete this function
    return math.ceil(2 * area / base)
base, area = input().strip().split(' ')
base, area = [int(base), int(area)]
height = lowestTriangle(base, area)
print(height)