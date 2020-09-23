# Enter your code here. Read input from STDIN. Print output to STDOUT
from statistics import median

n = int(input())
Q2 = [int(x) for x in input().split()]
Q2.sort()
t = int(len(Q2)/2)
if(len(Q2)%2 == 0):
    Q1 = Q2[:t]
    Q3 = Q2[t:]
else:
    Q1 = Q2[:t]
    Q3 = Q2[t+1:]
print(int(median(Q1)))
print(int(median(Q2)))
print(int(median(Q3)))