# Enter your code here. Read input from STDIN. Print output to STDOUT
import math

x = int(input())
n = int(input())
mu = int(input())
sigma = int(input())
mu1=  mu * n 
sigma1 = sigma * math.sqrt(n)
def cdf(x, mu, sigma):
    Z = (x - mu)/sigma
    return 0.5 * (1 + math.erf(Z / (math.sqrt(2))))
print(round(cdf(x, mu1, sigma1), 4))