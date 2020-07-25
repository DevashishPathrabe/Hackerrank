#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input())
    print(max((d for d in range(1, n+1) if n%d == 0), key=lambda x: 
    sum(map(int, str(x)))))
