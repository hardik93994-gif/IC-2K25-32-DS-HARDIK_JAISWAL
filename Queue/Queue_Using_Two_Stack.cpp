#include<iosream>
#include<stack>
using namespace std;

class Queue{
public:
stack<int> S1;
stack<int> S2;
Queue(){
  
}
void push(int x){
  while(!S1.empty()){
s2.push(S1.top());
S1.pop();
  }
S1.push(x)

  while(!S2.empty()){
S1.push(S2.top());
S2.pop();
}
}
int pop(){
  int ans = S1.top();
      S1.pop();
        return ans;
}
int peek(){
  return S1.top();
}
bool empty(){
   return S1.empty();
}
};

int main() {
    Queue q;

    q.push(1);
    q.push(2);

    cout << "Front element (peek): " << q.peek() << endl; // Output: 1
    cout << "Removed element (pop): " << q.pop() << endl; // Output: 1
    cout << "Is queue empty? " << (q.empty() ) << endl; // Output: No

    return 0;
}






