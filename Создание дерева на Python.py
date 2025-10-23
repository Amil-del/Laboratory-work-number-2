#Создание дерева на Python
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def print_tree(root, level=0, prefix="Root: "):
    if root is not None:
        print(" " * (level * 4) + prefix + str(root.val))
        if root.left is not None or root.right is not None:
            print_tree(root.left, level + 1, "L--- ")
            print_tree(root.right, level + 1, "R--- ")

# Создание и вывод дерева
if __name__ == "__main__":
    #     1
    #    / \
    #   2   3
    #  / \
    # 4   5
    
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.left = TreeNode(4)
    root.left.right = TreeNode(5)
    
    print("Бинарное дерево (Python):")
    print_tree(root)
#Пример вывода
#Бинарное дерево (Python):
#Root: 1
#    L--- 2
#        L--- 4
#        R--- 5
#    R--- 3

#Создание  графа на Python
from collections import deque

class Graph:
    def __init__(self, num_vertices):
        self.num_vertices = num_vertices
        self.adj_list = [[] for _ in range(num_vertices)]
    
    def add_edge(self, u, v):
        self.adj_list[u].append(v)
        self.adj_list[v].append(u)  # для неориентированного
    
    def bfs(self, start):
        visited = [False] * self.num_vertices
        queue = deque([start])
        visited[start] = True
        result = []
        
        while queue:
            vertex = queue.popleft()
            result.append(vertex)
            for neighbor in self.adj_list[vertex]:
                if not visited[neighbor]:
                    visited[neighbor] = True
                    queue.append(neighbor)
        return result
    
    def print_graph(self):
        for i in range(self.num_vertices):
            print(f"{i}: {self.adj_list[i]}")

# Создание и вывод графа
if __name__ == "__main__":
    # 0 -- 1
    # |    |
    # 2 -- 3
    graph = Graph(4)
    graph.add_edge(0, 1)
    graph.add_edge(0, 2)
    graph.add_edge(1, 3)
    graph.add_edge(2, 3)
    
    print("Граф (Python) - список смежности:")
    graph.print_graph()
    print("BFS от вершины 0:", graph.bfs(0))
#Пример вывода
#Граф (Python) - список смежности:
#0: [1, 2]
#1: [0, 3]
#2: [0, 3]
#3: [1, 2]
#BFS от вершины 0: [0, 1, 2, 3]

 