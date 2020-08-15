import numpy
N, M = map(int, input().split())
A, B = (numpy.array([input().split() for i in range(N)], int) for i in range(2))
print (A+B, A-B, A*B, A//B, A%B, A**B, sep = '\n')