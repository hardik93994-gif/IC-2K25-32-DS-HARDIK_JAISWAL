#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() {
        head = NULL;
    }

    // Insert at end
    void insert(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    // Display list
    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }

        cout << "NULL";
    }
};

int main() {
    DoublyLinkedList dl;

    dl.insert(1);
    dl.insert(2);
    dl.insert(3);

    dl.display();

    return 0;
}
