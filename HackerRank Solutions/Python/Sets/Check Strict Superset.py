# Enter your code here. Read input from STDIN. Print output to STDOUT
A = set(map(int, input().split()))
for i in range(int(input())):
    X = set(map(int, input().split()))
    if(A.issuperset(X) != True or len(A) == len(X)): 
        print(False)
        break 
else: 
    print(True)
