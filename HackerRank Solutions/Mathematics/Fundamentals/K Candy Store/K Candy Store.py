def fact(x, y=0):
    p = 1
    for i in range(y+1, x+1):
        p *= i
    return p

for _ in range(int(input())):
    n = int(input())
    k = int(input())
    print((fact(k+n-1, n-1) // fact(k))%10**9)