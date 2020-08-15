import numpy
N = int(input())
A = numpy.array([(input().split()) for i in range(N)], int)
B = numpy.array([(input().split()) for i in range(N)], int)
print (numpy.dot(A, B))