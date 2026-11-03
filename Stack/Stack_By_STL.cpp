#include <iostream>
#include <stack> 
using namespace std; 

int main() {
    
    stack<int> s;

    // push() - Insert elements at the top
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // size() - Get the number of elements
    cout << "Stack size: " << s.size() << "\n";

    // top() - access to the top element 
    cout << "Top element: " << s.top() << "\n";

    //pop() - Remove the top element 
    s.pop();
    cout << "Top element after pop: " << s.top() << "\n";

    // empty() - Check if stack is empty (returns true/false)
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << "\n";

    // Traversing and clearing the stack
    cout << "Remaining elements: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\n";
    
    return 0;
}
