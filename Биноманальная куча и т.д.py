#Создание бинарной_биноминальной кучи на Pyhton
import heapq

class BinaryHeap:
    def __init__(self):
        self.heap = []
    
    def push(self, item):
        heapq.heappush(self.heap, item)
    
    def pop(self):
        return heapq.heappop(self.heap) if self.heap else None
    
    def peek(self):
        return self.heap[0] if self.heap else None
    
    def display(self):
        print("Бинарная куча:", self.heap)
    
    def size(self):
        return len(self.heap)

# Пример использования
if __name__ == "__main__":
    heap = BinaryHeap()
    heap.push(5)
    heap.push(2)
    heap.push(8)
    heap.push(1)
    
    heap.display()
    print("Размер кучи:", heap.size())
    print("Верхний элемент:", heap.peek())
    
    print("Извлеченные элементы:")
    while heap.size() > 0:
        print(heap.pop(), end=" ")
    print()
#Пример вывода
#Бинарная куча: [1, 2, 8, 5]
#Размер кучи: 4
#Верхний элемент: 1
#Извлеченные элементы:
#1 2 5 8

#Создание кучи Фибоначчи на Python
class FibonacciNode:
    def __init__(self, key):
        self.key = key
        self.degree = 0
        self.child = None
        self.left = self
        self.right = self

class FibonacciHeap:
    def __init__(self):
        self.min_node = None
        self.count = 0
    
    def insert(self, key):
        node = FibonacciNode(key)
        if not self.min_node:
            self.min_node = node
        else:
            # Добавление в корневой список
            node.left = self.min_node
            node.right = self.min_node.right
            self.min_node.right.left = node
            self.min_node.right = node
            if key < self.min_node.key:
                self.min_node = node
        self.count += 1
        print(f"Добавлен: {key}")
        self.display()
    
    def display(self):
        if not self.min_node:
            print("Куча пуста")
            return
        print(f"Минимум: {self.min_node.key}, Узлов: {self.count}")

# Использование
fib_heap = FibonacciHeap()
fib_heap.insert(10)
fib_heap.insert(5)
fib_heap.insert(20)

#Создание хеш-таблицы на Python
class HashTable:
    def __init__(self, size=10):
        self.size = size
        self.table = [[] for _ in range(size)]
    
    def _hash(self, key):
        return hash(key) % self.size
    
    def insert(self, key, value):
        index = self._hash(key)
        for i, (k, v) in enumerate(self.table[index]):
            if k == key:
                self.table[index][i] = (key, value)
                print(f"Обновлен: {key} -> {value}")
                return
        self.table[index].append((key, value))
        print(f"Добавлен: {key} -> {value}")
        self.display()
    
    def display(self):
        print("Хеш-таблица:")
        for i, bucket in enumerate(self.table):
            print(f"  [{i}]: {bucket}")

# Использование
ht = HashTable()
ht.insert("apple", 10)
ht.insert("banana", 20)
ht.insert("apple", 15)