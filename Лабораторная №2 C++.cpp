#include <iostream>
#include <vector>
using namespace std;
//Создание мультисписка
int main() {
    vector<vector<int>> multiList = {
        {1, 2, 3},
        {4, 5},
        {6, 7, 8, 9},
        {10}
    };
    
    // Вывод мультисписка
    cout << "Мультисписок:" << endl;
    for (int i = 0; i < multiList.size(); i++) {
        cout << "Список " << i << ": ";
        for (int j = 0; j < multiList[i].size(); j++) {
            cout << multiList[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
//Пример:
//Мультисписок:
//Список 0: 1 2 3 
//Список 1: 4 5 
//Список 2: 6 7 8 9 
//Список 3: 10 



//Создание очереди
#include <iostream>
#include <queue>  
using namespace std;

int main() {
    queue<int> q;
    
    q.push(10);  
    q.push(20);    
    q.push(30);  
    
    
    cout << "Первый элемент в очереди: " << q.front() << endl;
    cout << "Размер очереди: " << q.size() << endl;
    
    return 0;
}
//Пример вывода:
//Первый элемент в очереди: 10
//Размер очереди: 3


//Создание дека
#include <iostream>
#include <deque>  
using namespace std;

int main() {
    deque<int> d;
    
    d.push_back(10);   
    d.push_back(20);   
    d.push_front(5);   
    d.push_front(1);   
    
    
    cout << "Дек: ";
    for (int i = 0; i < d.size(); i++) {
        cout << d[i] << " ";
    }
    cout << endl;
    
    cout << "Первый элемент: " << d.front() << endl;
    cout << "Последний элемент: " << d.back() << endl;
    cout << "Размер дека: " << d.size() << endl;
    
    return 0;
}
//Пример вывода:
//Дек: 1 5 10 20 
//Первый элемент: 1
//Последний элемент: 20
//Размер дека: 4



//Создание приоритетной очереди
#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);
    
    cout << "Элементы по приоритету: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";  // Берем самый приоритетный элемент
        pq.pop();                 // Удаляем его из очереди
    }
    
    return 0;
}
//Пример вывода:
//Элементы по приоритету: 50 30 20 10 