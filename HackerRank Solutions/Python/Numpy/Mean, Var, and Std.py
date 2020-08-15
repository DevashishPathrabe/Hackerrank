import numpy
numpy.set_printoptions(legacy = '1.13')
N, M = map(int, input().split())
array = numpy.array([input().split() for i in range(N)], int)
print (numpy.mean(array, axis = 1))
print (numpy.var(array, axis = 0))
print (numpy.std(array, axis = None))
