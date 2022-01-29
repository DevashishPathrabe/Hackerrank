# Enter your code here. Read input from STDIN. Print output to STDOUT
maths, stats = [], []

for i in range(5):
    m, s = map(int, input().split())
    maths.append(m)
    stats.append(s)
 
def bValue(x,y):
    n = len(x)
    xy = [x[i]*y[i] for i in range(n) ]
    xSquare = [i**2 for i in x]
    b = (n * (sum(xy)) - ((sum(x)*sum(y)))) / float(((n*sum(xSquare))-sum(x)**2))
    return b
    
def abValues(x,y):
    xMean = sum(x) / float(len(x))
    yMean = sum(y) / float(len(y))
    b = bValue(x, y)
    a = yMean - (b * xMean)
    return a, b

a, b = abValues(maths, stats)
print (a + b*80)