#!/bin/python3

import math
import os
import random
import re
import sys
from collections import deque, defaultdict
# Complete the findShortest function below.

#
# For the weighted graph, <name>:
#
# 1. The number of nodes is <name>_nodes.
# 2. The number of edges is <name>_edges.
# 3. An edge exists between <name>_from[i] to <name>_to[i].
#
#
def findShortest(graph_nodes, graph_from, graph_to, ids, val):
    # solve here
    maps = defaultdict(list)
    print(maps)
    colour = defaultdict(int)
    for i in range(len(graph_from)):
        maps[graph_from[i]].append(graph_to[i])
        maps[graph_to[i]].append(graph_from[i])
        if(graph_from[i] not in colour):
            colour[graph_from[i]] = ids[graph_from[i]-1]
        if(graph_to[i] not in colour):
            colour[graph_to[i]] = ids[graph_to[i]-1]
    queue = deque()
    queue.append((val, 0))
    start_colour = colour[val]
    visited = set()
    while(queue):
        current, count = queue.popleft()
        visited.add(current)
        for i in maps[current]:
            if(i not in visited):
                if(colour[i] == start_colour):
                    return count+1
                visited.add(i)
                queue.append((i, count+1))
    return -1
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    graph_nodes, graph_edges = map(int, input().split())

    graph_from = [0] * graph_edges
    graph_to = [0] * graph_edges

    for i in range(graph_edges):
        graph_from[i], graph_to[i] = map(int, input().split())

    ids = list(map(int, input().rstrip().split()))

    val = int(input())

    ans = findShortest(graph_nodes, graph_from, graph_to, ids, val)

    fptr.write(str(ans) + '\n')

    fptr.close()
