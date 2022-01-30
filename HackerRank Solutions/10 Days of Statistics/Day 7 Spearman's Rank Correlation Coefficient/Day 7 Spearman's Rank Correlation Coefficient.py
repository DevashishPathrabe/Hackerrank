# Enter your code here. Read input from STDIN. Print output to STDOUT
def getRank(X, n):
    xRank = dict((x, i+1) for i, x in enumerate(sorted(set(X))))
    return [xRank[x] for x in X]
n = int(input())
X = list(map(float, input().split()))
Y = list(map(float, input().split()))
rx = getRank(X, n)
ry = getRank(Y, n)
d = [(rx[i] -ry[i])**2 for i in range(n)]
rxy = 1 - (6 * sum(d)) / (n * (n*n - 1))
print('%.3f' % rxy)