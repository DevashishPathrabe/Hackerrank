# Enter your code here. Read input from STDIN. Print output to STDOUT
import math
lam = float(input())
k = int(input())
res = ((math.pow(lam, k) * math.exp(-lam)) / math.factorial(k))
print("{:.3f}".format(res))
