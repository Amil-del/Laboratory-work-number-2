# Создание мультисписка 3x3 на Python
multilist = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

# Доступ к элементам
print("Элемент [1][2]:", multilist[1][2])  # Вывод: 6

# Реализация очереди на Python
simple_queue = []

# Добавление в очередь
simple_queue.append(1)
simple_queue.append(2)
simple_queue.append(3)
print("Простая очередь:", simple_queue)  # [1, 2, 3]

# Извлечение из очереди 
first_item = simple_queue.pop(0)
print("Извлечен первый элемент:", first_item)  # 1
print("Очередь после извлечения:", simple_queue)  # [2, 3]

# Создание дека
from collections import deque

d = deque([1, 2, 3])
print("Исходный дек:", d)  # deque([1, 2, 3])

# Добавление элементов
d.append(4)           # в конец
d.appendleft(0)       # в начало
print("После добавления:", d)  # deque([0, 1, 2, 3, 4])

# Удаление элементов
right_item = d.pop()        # с конца
left_item = d.popleft()     # с начала
print("Удален справа:", right_item)   # 4
print("Удален слева:", left_item)     # 0
print("После удаления:", d)           # deque([1, 2, 3])

import heapq

# Создаем пустую приоритетную очередь
pq = []

# Добавляем элементы (приоритет, значение)
heapq.heappush(pq, (2, "задача B"))
heapq.heappush(pq, (1, "задача A"))  # самый высокий приоритет
heapq.heappush(pq, (3, "задача C"))

# Извлекаем элементы в порядке приоритета
while pq:
    priority, task = heapq.heappop(pq)
    print(f"Выполняем: {task} (приоритет: {priority})")

