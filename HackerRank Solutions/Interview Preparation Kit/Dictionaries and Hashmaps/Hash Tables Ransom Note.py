#!/bin/python3
import math
import os
import random
import re
import sys

# Complete the checkMagazine function below.
def checkMagazine(magazine, note):
    wordOccurence = {}
    for word in magazine:
        wordOccurence[word] = wordOccurence.setdefault(word, 0) + 1
    for word in note:
        if(word in wordOccurence and wordOccurence[word] > 0):
            wordOccurence[word] -= 1
        else:
            print("No")
            return
    print("Yes")
    return
if __name__ == '__main__':
    mn = input().split()

    m = int(mn[0])

    n = int(mn[1])

    magazine = input().rstrip().split()

    note = input().rstrip().split()

    checkMagazine(magazine, note)
