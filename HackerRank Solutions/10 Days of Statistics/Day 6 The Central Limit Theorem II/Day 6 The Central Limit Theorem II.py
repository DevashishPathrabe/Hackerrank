# Enter your code here. Read input from STDIN. Print output to STDOUT
import math

def cdf(x, m, sd):
    return 0.5 * (1 + math.erf((x - m) / (sd * math.sqrt(2))))
max_weight = 250
n = 100
m = 2.4
sd = 2.0
print("%.4f" % round(cdf(max_weight, n * m, math.sqrt(n) * sd), 4))
