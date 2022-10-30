#!/bin/python3

import os
import sys

#
# Complete the primeCount function below.
#
def primeCount(n):
    #
    # Write your code here.
    #
    primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47]
    for i in range(n):
        numberOfPrimeFactors, result = 0, 1
        for j in primes:
            result *= j
            if(result <= n):
                numberOfPrimeFactors += 1
        return numberOfPrimeFactors
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        n = int(input())

        result = primeCount(n)

        fptr.write(str(result) + '\n')

    fptr.close()
