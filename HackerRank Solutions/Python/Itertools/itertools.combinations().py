from itertools import combinations
S, k = input().split()
[print("".join(i)) 
for x in range(1, int(k)+1) for i in combinations(sorted(S), x)]