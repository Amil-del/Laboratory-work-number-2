#Создание дерева на Python
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children if children is not None else [] # List[Node]
#Создание  графа на Python
graph = {
    'A': ['B', 'C'],
    'B': ['A', 'D'],
    'C': ['A'],
    'D': ['B']
}

graph = [[1, 2], [0, 3], [0], [1]] # graph[0] -> [1,2]

 