N, X = map(int,input().split())
listOfMarks = []
for subject in range(X):
    listOfMarks += [map(float,input().split())]   
for studentMarks in zip(*listOfMarks):    
    print (sum(studentMarks)/X)