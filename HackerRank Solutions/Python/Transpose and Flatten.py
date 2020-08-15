import numpy
N, M = map(int, input().split())
array = numpy.array([input().split() for i in range(N)], int)
print (numpy.transpose(array))
print (array.flatten())