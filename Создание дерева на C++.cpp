//Создание дерева на C++
#include <vector>
#include <memory>

struct Node {
    int val;
    std::vector<std::unique_ptr<Node>> children;
    Node(int x) : val(x) {}
};
//Создание графа на C++
#include <vector>
std::vector<std::vector<int>> graph = {{1, 2}, {0, 3}, {0}, {1}};