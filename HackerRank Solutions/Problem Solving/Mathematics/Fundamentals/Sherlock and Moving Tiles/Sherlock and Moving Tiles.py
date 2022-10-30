import math
l, s1, s2 = map(int,input().split())
for i in range(int(input())):
    queries = int(input())
    H = l - math.sqrt(queries)
    R = abs(s1-s2) / math.sqrt(2)
    print(H / R)