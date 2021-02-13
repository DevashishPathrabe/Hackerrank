# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import groupby
d = input()
for i, j in groupby(map(int,list(d))):
    print(tuple([len(list(j)), i]), end = " ")