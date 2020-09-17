#include <iostream>

using namespace std;
template <typename T>

class Queue{
    class Node{
    public:
        T data;
        Node *next;
    };
    Node *head = NULL;
    Node *tail = NULL;
public:
    bool isEmpty(){
        return head == NULL;
    }
    void enqueue(T data){
        Node *oldlast = tail;
        tail = new Node();
        tail->data = data;
        tail->next = NULL;
        if(isEmpty()) head = tail;
        else oldlast->next = tail;
    }
    T dequeue(){
        T item = head->data;
        head = head->next;
        if(isEmpty()) tail = NULL;
        return item;
    }
};
/*
int main()
{
    Queue<int> q;
    for(size_t i = 10; i < 100; i += 5) q.enqueue(i);
    for(size_t i = 0; i < 5; ++i) cout << q.dequeue() << endl;
    return 0;
}
*/
