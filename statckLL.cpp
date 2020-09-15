#include <iostream>
#include <string>

using namespace std;
template <typename T>

class Stack{
    class Node{
    public:
        T data;
        Node *next;
    };
    Node *tos = NULL;
public:
    bool isEmpty() {return tos == NULL;}

    void push(T item){
        Node *temp = tos;
        tos = new Node();
        tos->data = item;
        tos->next = temp;
    }

    T pop(){
        T item = tos->data;
        tos = tos->next;
        return item;
    }
};

int main()
{
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    return 0;
}
