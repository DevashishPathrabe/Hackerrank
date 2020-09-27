# Enter your code here. Read input from STDIN. Print output to STDOUT
A, B = [float(num) for num in input().split(" ")]
dailyCostA = 160 + (40 * (A + A**2))
dailyCostB = 128 + (40 * (B + B**2))
print(round(dailyCostA, 3))
print(round(dailyCostB, 3))
