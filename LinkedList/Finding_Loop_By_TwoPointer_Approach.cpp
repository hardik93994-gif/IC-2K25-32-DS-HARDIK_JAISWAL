#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int value) {
        data = value;
        next = NULL;
    }
};


bool detectCyc(Node* head) {
    if (head == NULL || head->next == NULL) {
        return false; 
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;          
        fast = fast->next->next;    

        if (slow == fast) {
            return true; 
        }
    }

    return false; 
}

int main() {
    
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    
    head->next->next->next->next = head->next; 

    
    if (detectCyc(head)) {
        cout << "Cycle detected in the Linked List!" << endl;
    } else {
        cout << "No cycle detected in the Linked List." << endl;
    }

    return 0;
}
