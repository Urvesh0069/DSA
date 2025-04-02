#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int topIndex;
    int capacity;

public:
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        topIndex = -1;
    }

    int getTop() {
        if(topIndex == -1) {
            cout << "Stack underflow\n";
            return -1;
        }

        return arr[topIndex];
    }

    void push(int value) {
        if (topIndex == capacity - 1) {
            cout << "Stack overflow\n";
            return;
        }
        arr[++topIndex] = value;
        cout << value << " pushed into stack\n";
    }

    int pop() {
        if (topIndex == -1) {
            cout << "Stack underflow\n";
            return -1;
        }
        int poppedValue = arr[topIndex--];
        return poppedValue;
    }

    bool isEmpty() {
        return topIndex == -1;
    }

};

int main() {
    Stack stack(5);

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.getTop() << endl;

    stack.pop();

    cout << "Top element: " << stack.getTop() << endl;

    return 0;
}