from itertools import permutations
S, k = input().split()
for i in permutations(sorted(S),int(k)):
    print("".join(i))