from itertools import combinations_with_replacement
S,k = input().split()
for i in combinations_with_replacement(sorted(S),int(k)):
    print("".join(i))