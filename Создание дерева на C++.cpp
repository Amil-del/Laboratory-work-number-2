//Создание дерева на C++

#include <iostream>
#include <memory>

struct TreeNode {
    int val;
    std::unique_ptr<TreeNode> left;
    std::unique_ptr<TreeNode> right;
    
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void printTree(TreeNode* root, int level = 0, const std::string& prefix = "Root: ") {
    if (root != nullptr) {
        std::cout << std::string(level * 4, ' ') << prefix << root->val << std::endl;
        if (root->left != nullptr || root->right != nullptr) {
            printTree(root->left.get(), level + 1, "L--- ");
            printTree(root->right.get(), level + 1, "R--- ");
        }
    }
}

int main() {
    //     1
    //    / \
    //   2   3
    //  / \
    // 4   5
    
    auto root = std::make_unique<TreeNode>(1);
    root->left = std::make_unique<TreeNode>(2);
    root->right = std::make_unique<TreeNode>(3);
    root->left->left = std::make_unique<TreeNode>(4);
    root->left->right = std::make_unique<TreeNode>(5);
    
    std::cout << "Бинарное дерево (C++):" << std::endl;
    printTree(root.get());
    return 0;
}
//Бинарное дерево (C++):
//Root: 1
//    L--- 2
//        L--- 4
//        R--- 5
//    R--- 3

//Создание графа на C++
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

class Graph {
private:
    int num_vertices;
    std::vector<std::vector<int>> adj_list;
    
public:
    Graph(int n) : num_vertices(n), adj_list(n) {}
    
    void add_edge(int u, int v) {
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);  // для неориентированного
    }
    
    std::vector<int> bfs(int start) {
        std::vector<bool> visited(num_vertices, false);
        std::queue<int> q;
        std::vector<int> result;
        
        visited[start] = true;
        q.push(start);
        
        while (!q.empty()) {
            int vertex = q.front();
            q.pop();
            result.push_back(vertex);
            
            for (int neighbor : adj_list[vertex]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        return result;
    }
    
    void print_graph() {
        for (int i = 0; i < num_vertices; ++i) {
            std::cout << i << ": [";
            for (size_t j = 0; j < adj_list[i].size(); ++j) {
                std::cout << adj_list[i][j];
                if (j < adj_list[i].size() - 1) std::cout << ", ";
            }
            std::cout << "]" << std::endl;
        }
    }
};

int main() {
    // 0 -- 1
    // |    |
    // 2 -- 3
    Graph graph(4);
    graph.add_edge(0, 1);
    graph.add_edge(0, 2);
    graph.add_edge(1, 3);
    graph.add_edge(2, 3);
    
    std::cout << "Граф (C++) - список смежности:" << std::endl;
    graph.print_graph();
    
    auto bfs_result = graph.bfs(0);
    std::cout << "BFS от вершины 0: [";
    for (size_t i = 0; i < bfs_result.size(); ++i) {
        std::cout << bfs_result[i];
        if (i < bfs_result.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
    
    return 0;
}
//Пример вывода 
//Граф (C++) - список смежности:
//0: [1, 2]
//1: [0, 3]
//2: [0, 3]
//3: [1, 2]
//BFS от вершины 0: [0, 1, 2, 3]