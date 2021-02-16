#!/usr/bin/python

def displayPathtoPrincess(n,grid):
#print all the moves here
    flag = True
    n = n-1
    while(flag):
        if(grid[0][n] == 'p'):
            flag = False
            a = 0
            b = n
        if(grid[n][0] == 'p'):
            flag = False
            a = n
            b = 0
        if(grid[0][0] == 'p'):
            flag = False 
            a = 0
            b = 0
        if(grid[n][n] == 'p'):
            flag = False 
            a = n
            b = n
        y = a - int(n/2)
        x = b - int(n/2)
        while(0 != y):
            if(y<0):
                y = y+1
                print("UP")
            if(y>0):
                y = y-1
                print("DOWN")
        while(0 != x):
            if(x<0):
                x = x+1
                print("LEFT")
            if(x>0):
                x = x-1
                print("RIGHT")
m = int(input())
grid = [] 
for i in range(0, m): 
    grid.append(input().strip())

displayPathtoPrincess(m,grid)