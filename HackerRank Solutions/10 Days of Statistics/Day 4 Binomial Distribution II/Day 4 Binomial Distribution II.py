# Enter your code here. Read input from STDIN. Print output to STDOUT
from math import factorial

p = 12/100.0
q = 1-p
N = 10
B0 = factorial(N) / (factorial(0)*factorial(N-0)) * p**0 * q**(N-0)
B1 = factorial(N) / (factorial(1)*factorial(N-1)) * p**1 * q**(N-1)
B2 = factorial(N) / (factorial(2)*factorial(N-2)) * p**2 * q**(N-2)
print(round(B0+B1+B2, 3))
print(round(1-(B0+B1), 3))
