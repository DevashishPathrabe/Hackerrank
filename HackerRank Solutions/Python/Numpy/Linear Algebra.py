import numpy
numpy.set_printoptions(legacy = '1.13')
array = numpy.array([input().split() for i in range(int(input()))],float)
print (numpy.linalg.det(array))