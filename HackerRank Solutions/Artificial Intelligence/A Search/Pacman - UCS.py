import copy

pacmanX, pacmanY = list(map(int, input().split()))
foodX, foodY = list(map(int, input().split()))
n, m = list(map(int, input().split()))
grid = []
queue = []
answer_routes = None
for i in range(0, n):
    grid.append(list(map(str, input())))
directions = [[-1, 0], [0, -1], [0, 1], [1, 0]]
queue.append([pacmanX, pacmanY, []])
while(len(queue) > 0):
    x, y, r = queue.pop(0)
    routes = copy.deepcopy(r)
    routes.append([x, y])
    if(x == foodX and y == foodY):
        if(answer_routes == None):
            answer_routes = routes
            break
    possible_moves = []
    for direction in directions:
        nextX, nextY = x + direction[0], y + direction[1]
        if(nextX < 0 or nextX >= n or nextY < 0 and nextY >= n):
            continue
        if(grid[nextX][nextY] == "-" or grid[nextX][nextY] == "."):
            grid[nextX][nextY] = '='
            possible_moves.append([nextX, nextY, 0 if grid[nextX][nextY] == "." else 1]) 
    possible_moves.sort(key = lambda x: x[2])
    for move in possible_moves:
        queue.append([move[0], move[1], routes])

print(str(len(answer_routes) - 1))
for point in answer_routes:
    print(str(point[0]) + " " + str(point[1]))