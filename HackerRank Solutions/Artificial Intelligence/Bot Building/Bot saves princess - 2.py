#

def nextMove(n,r,c,grid):
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if(grid[i][j] == "p"):
                a = i
                b = j
    nextMove = ("UP" if((r-a) > 0) else "DOWN")
    if((r-a) == 0):
        nextMove = ("LEFT" if((c-b) > 0) else "RIGHT")
    return nextMove

n = int(input())
r,c = [int(i) for i in input().strip().split()]
grid = []
for i in range(0, n):
    grid.append(input())

print(nextMove(n,r,c,grid))