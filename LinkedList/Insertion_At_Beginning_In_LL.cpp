#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void insertAtBeginning(int val) {
    Node* newNode = new Node();

    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void display() {
    Node* current = head;

    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }

    cout << "NULL" << endl;
}

int main() {
    insertAtBeginning(9);
    insertAtBeginning(6);
    insertAtBeginning(2);
    insertAtBeginning(7);

    display();

    return 0;
}
