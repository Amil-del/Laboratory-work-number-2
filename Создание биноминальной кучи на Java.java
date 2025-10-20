//Создание биноминальной кучи на Java
class BinomialNode<T extends Comparable<T>> {
    T key;
    int degree;
    BinomialNode<T> parent;
    BinomialNode<T> child;
    BinomialNode<T> sibling;
    
    public BinomialNode(T key) {
        this.key = key;
        this.degree = 0;
    }
}

class BinomialHeap<T extends Comparable<T>> {
    private BinomialNode<T> head;
    
    public BinomialHeap() {
        this.head = null;
    }
}
//Создание кучи Фибоначчи на Java
class FibonacciNode<T extends Comparable<T>> {
    T key;
    int degree;
    boolean marked;
    FibonacciNode<T> parent;
    FibonacciNode<T> child;
    FibonacciNode<T> left;
    FibonacciNode<T> right;
    
    public FibonacciNode(T key) {
        this.key = key;
        this.left = this;
        this.right = this;
    }
}

class FibonacciHeap<T extends Comparable<T>> {
    private FibonacciNode<T> minNode;
    private int numNodes;
    
    public FibonacciHeap() {
        this.minNode = null;
        this.numNodes = 0;
    }
}
//Создание хеш-таблицы на C++
class HashTable<K, V> {
    private LinkedList<Entry<K, V>>[] buckets;
    private int capacity;
    private int size;
    
    static class Entry<K, V> {
        K key;
        V value;
        Entry(K key, V value) {
            this.key = key;
            this.value = value;
        }
    }
    
    public HashTable(int capacity) {
        this.capacity = capacity;
        this.buckets = new LinkedList[capacity];
    }
    
    private int hash(K key) {
        return key.hashCode() % capacity;
    }
}