//Создание биноминальной кучи на C++
#include <iostream>
#include <queue>
#include <vector>

class BinaryHeap {
private:
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;
    
public:
    void push(int value) {
        min_heap.push(value);
        std::cout << "Добавлен: " << value << std::endl;
        display();
    }
    
    void pop() {
        if (min_heap.empty()) return;
        std::cout << "Извлечен: " << min_heap.top() << std::endl;
        min_heap.pop();
        display();
    }
    
    void display() {
        auto temp = min_heap;
        std::cout << "Куча: ";
        while (!temp.empty()) {
            std::cout << temp.top() << " ";
            temp.pop();
        }
        std::cout << "\nРазмер: " << min_heap.size() << std::endl;
    }
};

// Использование
int main() {
    BinaryHeap heap;
    heap.push(5);
    heap.push(2);
    heap.push(8);
    heap.push(1);
    heap.pop();
}
//Создание кучи Фибоначчи на C++
#include <iostream>

struct FibonacciNode {
    int key, degree;
    FibonacciNode *child, *left, *right;
    FibonacciNode(int k) : key(k), degree(0), child(nullptr), 
                          left(this), right(this) {}
};

class FibonacciHeap {
private:
    FibonacciNode* min_node = nullptr;
    int count = 0;
    
public:
    void insert(int key) {
        FibonacciNode* node = new FibonacciNode(key);
        if (!min_node) {
            min_node = node;
        } else {
            // Добавление в корневой список
            node->left = min_node;
            node->right = min_node->right;
            min_node->right->left = node;
            min_node->right = node;
            if (key < min_node->key) {
                min_node = node;
            }
        }
        count++;
        std::cout << "Добавлен: " << key << std::endl;
        display();
    }
    
    void display() {
        if (!min_node) {
            std::cout << "Куча пуста" << std::endl;
            return;
        }
        std::cout << "Минимум: " << min_node->key 
                  << ", Узлов: " << count << std::endl;
    }
};

// Использование
int main() {
    FibonacciHeap fib_heap;
    fib_heap.insert(10);
    fib_heap.insert(5);
    fib_heap.insert(20);
}
//Пример вывода
//Добавлен: 10
//Минимум: 10, Узлов: 1
//Добавлен: 5
//Минимум: 5, Узлов: 2
//Добавлен: 20
//Минимум: 5, Узлов: 3

//Создание хеш-таблицы
#include <iostream>
#include <vector>
#include <list>
#include <utility>

class HashTable {
private:
    std::vector<std::list<std::pair<std::string, int>>> table;
    int size;
    
    int hash(const std::string& key) {
        return std::hash<std::string>{}(key) % size;
    }
    
public:
    HashTable(int s = 10) : size(s) {
        table.resize(size);
    }
    
    void insert(const std::string& key, int value) {
        int index = hash(key);
        for (auto& pair : table[index]) {
            if (pair.first == key) {
                pair.second = value;
                std::cout << "Обновлен: " << key << " -> " << value << std::endl;
                return;
            }
        }
        table[index].push_back({key, value});
        std::cout << "Добавлен: " << key << " -> " << value << std::endl;
        display();
    }
    
    void display() {
        std::cout << "Хеш-таблица:" << std::endl;
        for (int i = 0; i < size; i++) {
            std::cout << "  [" << i << "]: ";
            for (auto& pair : table[i]) {
                std::cout << "(" << pair.first << "," << pair.second << ") ";
            }
            std::cout << std::endl;
        }
    }
};

// Использование
int main() {
    HashTable ht;
    ht.insert("apple", 10);
    ht.insert("banana", 20);
    ht.insert("apple", 15);
}
//Пример вывода
//Добавлен: apple -> 10
//Хеш-таблица:
//  [0]: 
//  [1]: 
//  [2]: 
//  [3]: 
//  [4]: 
//  [5]: 
//  [6]: 
//  [7]: 
//  [8]: (apple,10) 
//  [9]: 
//Добавлен: banana -> 20
//Хеш-таблица:
//  [0]: 
//  [1]: 
//  [2]: 
//  [3]: (banana,20) 
//  [4]: 
//  [5]: 
//  [6]: 
//  [7]: 
//  [8]: (apple,10) 
//  [9]: 
//Обновлен: apple -> 15
