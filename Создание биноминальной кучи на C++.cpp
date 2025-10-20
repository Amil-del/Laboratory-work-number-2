//Создание биноминальной кучи на C++
template<typename T>
struct BinomialNode {
    T key;
    int degree;
    BinomialNode* parent;
    BinomialNode* child;
    BinomialNode* sibling;
    
    BinomialNode(T k) : key(k), degree(0), parent(nullptr), 
                       child(nullptr), sibling(nullptr) {}
};

template<typename T>
class BinomialHeap {
private:
    BinomialNode<T>* head;
public:
    BinomialHeap() : head(nullptr) {}
    ~BinomialHeap(); // Необходим деструктор
};
//Создание кучи Фибоначчи
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
//Создание хеш-таблицы
class HashTable:
    def __init__(self, capacity=16):
        self.capacity = capacity
        self.size = 0
        self.buckets = [[] for _ in range(capacity)]
    
    def _hash(self, key):
        return hash(key) % self.capacity
