#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    N = int(input())
    arr = []
    for N_itr in range(N):
        firstNameEmailID = input().split()

        firstName = firstNameEmailID[0]

        emailID = firstNameEmailID[1]
        if(re.search(".+@gmail\.com$", emailID)):
            arr.append(firstName)
    arr.sort()
    for name in arr:
        print(name)