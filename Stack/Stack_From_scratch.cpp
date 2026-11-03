#include <iostream>
using namespace std;
#define max 100
class stack {
    private:
    int arr[max];
    int top;
    public:
    stack(){
        top=-1;
    }

void push(int value){
    if(top==max-1){
        cout<<"Overflow"<<endl;
    }
        else{
            arr[++top]=value;
            cout<<value<<"pushed into stack."<<endl;

        }
    }
void pop(){
    if(top==-1){
        cout<<"Stack Underflow"<<endl;
    }else{
        cout<<arr[top]<<"popped from stack."<<endl;
        top--;
    }
}
void display (){
    if(top==-1){
        cout<<"Stack is empty!."<<endl;
    }else{
        cout<<"stack elements: ";
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
    }
    cout<<endl;
}
}
};
int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.pop();
    s.pop();
    s.pop();
    s.push(10);
    s.display();
    return 0;
}
