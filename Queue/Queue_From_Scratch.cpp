
#include <iostream>
using namespace std;

class Queue {
private:
    static const int CAPACITY = 80;
    int arr[CAPACITY];
    int frontIdx;
    int rearIdx;

public:
    Queue() {
        frontIdx = 0;
        rearIdx = -1;
    }

    void enqueue(int item) {
        if (rearIdx == CAPACITY - 1) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        rearIdx++;
        arr[rearIdx] = item;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        frontIdx++;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        return arr[frontIdx];
    }

    bool isEmpty(){
        return frontIdx > rearIdx;
    }

    int size(){
        if (isEmpty()) return 0;
        return (rearIdx - frontIdx) + 1;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.peek() << endl; // 10
    
    q.dequeue();
    cout << "Front element after dequeue: " << q.peek() << endl; // 20
    cout << "Size: " << q.size() << endl; // 2

    return 0;
}
