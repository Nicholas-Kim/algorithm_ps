import sys
from collections import deque


def dfs(start_v, graph):
    discovered = []
    stack = [start_v]
    while stack:
        v = stack.pop()
        if v not in discovered:
            discovered.append(v)
            for w in graph[v]:
                stack.append(w)
    return discovered


def bfs(start_v, graph):
    discovered = [start_v]
    queue = [start_v]
    while queue:
        v = queue.pop(0)
        for w in graph[v]:
            if w not in discovered:
                discovered.append(w)
                queue.append(w)
    return discovered


N,M,V=map(int,sys.stdin.readline().split())

graph = {}
#list = []
for i in range(1,N+1):
    graph[i] = []

for i in range(M):
    key, child = map(int, sys.stdin.readline().split())
    if key not in graph:
        graph[key] = list()
    if child not in graph:
        graph[child] = list()
    graph[key].append(child)
    graph[child].append(key)

for key in graph:
    graph[key].sort(reverse=True)

for item in dfs(V, graph):
    print(item, end =' ')

for key in graph:
    graph[key].sort()


print()
for item in bfs(V, graph):
    print(item, end =' ')


