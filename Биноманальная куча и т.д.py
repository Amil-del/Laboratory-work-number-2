#Создание бинарной_биноминальной кучи на Pyhton
class BinomialNode:
    def __init__(self, value):
        self.value = value      # Значение узла
        self.degree = 0         # Количество детей (степень дерева)
        self.children = []      # Список дочерних узлов

class BinomialHeap:
    def __init__(self):
        self.trees = []         # Список корневых деревьев кучи
    
    def add_tree(self, value):
        new_node = BinomialNode(value)
        self.trees.append(new_node)
        print(f"✓ Добавлено дерево с корнем: {value}")
    
    def show_heap(self):
        if not self.trees:
            print("Куча пуста!")
            return
        
        print("\n📚 СТРУКТУРА БИНОМИАЛЬНОЙ КУЧИ:")
        for i, tree in enumerate(self.trees):
            print(f"Дерево {i+1}: корень = {tree.value}, степень = {tree.degree}")
            self._show_children(tree, 1)

    def _show_children(self, node, level):
        for child in node.children:
            indent = "    " * level
            print(f"{indent}↳ Ребенок: {child.value}, степень = {child.degree}")
            self._show_children(child, level + 1)
#Создание кучи Фибоначчи на Python
class FibonacciNode:
    def __init__(self, key):
        self.key = key
        self.degree = 0
        self.marked = False
        self.parent = self.child = None
        self.left = self.right = self

class FibonacciHeap:
    def __init__(self):
        self.min_node = None
        self.num_nodes = 0
#Создание хеш-таблицы на Python
class HashTable:
    def __init__(self, capacity=16):
        self.capacity = capacity
        self.size = 0
        self.buckets = [[] for _ in range(capacity)]
    
    def _hash(self, key):
        return hash(key) % self.capacity