# Enter your code here. Read input from STDIN. Print output to STDOUT
import math

def biniomialDistribution(x, n, p):
    b = (math.factorial(n)/(math.factorial(x)*math.factorial(n-x)))*(p**x)*((1-p)**(n-x))
    return(b)
b, p, n = 0, 1.09/2.09, 6
for i in range(3,7):
    b += biniomialDistribution(i, n, p)   
print("%.3f" %b)
