#!/bin/python3
def getPosition(board):
    for i in range(5):
        for j in range(5):
            if(board[i][j] == "d"):
                return [i, j]
def nextMove(posr, posc, board):
    i, j = getPosition(board)
    if(posr > i):
        print("UP")
    elif(posr < i):
        print("DOWN")
    else:
        if(posc > j):
            print("LEFT")
        elif(posc < j):
            print("RIGHT")
        else:
            print("CLEAN")

if __name__ == "__main__":
    pos = [int(i) for i in input().strip().split()]
    board = [[j for j in input().strip()] for i in range(5)]
    nextMove(pos[0], pos[1], board)