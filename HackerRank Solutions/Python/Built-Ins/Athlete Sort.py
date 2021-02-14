# Enter your code here. Read input from STDIN. Print output to STDOUT

N,M = map(int,input().split())
rows = [list(map(int,input().split())) for i in range(N)]
i = int(input())
rows = sorted(rows, key=lambda x:x[i])
for i in rows:
    print(*i)