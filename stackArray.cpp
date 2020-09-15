#include <iostream>

using namespace std;
template <typename T>

class Stack{
    int tos = -1;
    int size = 1;
    T *arr;
public:
    Stack(){arr = new T[size];}

    bool isEmpty() {
        return tos == -1;
    }
    void push(T item){
        if(tos == size-1) resize(2*size);
        arr[++tos] = item;
    }
    T pop(){
        if(tos == -1){
            throw "StackUnderFlow";
        }
        T item = arr[tos];
        if(tos > 0 && tos == size/4) resize(size/2);
        tos--;
        return item;

    }
private:
    void resize(int new_size){
        T *copy = new T[size];
        for(int i = 0; i < size; i++){ copy[i] = arr[i]; }
        arr = new T[new_size];
        for(int i = 0; i < size; i++){ arr[i] = copy[i]; }
        delete []copy;
        size = new_size;
    }
};

int main()
{
    Stack<int> s;
    for(int i = 1; i <= 10; i++) s.push(i);
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    return 0;
}
