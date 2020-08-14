import numpy
N, M, P = map(int, input().split())
A = numpy.array([[1,2] for i in range(N)] )
B = numpy.array([[3,4] for i in range(M)] )
print (numpy.concatenate((A, B),axis = 0))