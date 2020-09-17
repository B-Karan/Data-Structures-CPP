/* This is the implementation of cirucular queue using array.*/

#include <iostream>

using namespace std;
template <typename T>

class Queue{
    T *queue;
    int size;
    int front = -1;
    int rear = -1;
public:
    Queue(int size){
        queue = new T[size];
        this->size = size;
    }
    bool isEmpty(){
        if(front == -1 && rear == -1) return true;
        return false;

    }
    void enqueue(T item){
        if(isEmpty()){ front = 0; rear = 0;}
        else ++rear;
        rear = rear % size;
        queue[rear] = item;
    }
    T dequeue(){
        T item = queue[front];
        front = (++front) % size;
        return item;
    }
};
/*
int main()
{
    Queue<int> q(5);
    for(int i = 10; i < 18; i++) q.enqueue(i);
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;
    q.print();
    return 0;
}
*/
