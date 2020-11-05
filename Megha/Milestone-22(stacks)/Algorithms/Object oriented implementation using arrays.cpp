#include <iostream>
#define MAX_SIZE 101
using namespace std;

class Stack{
      private:
int A[MAX_SIZE];
int top;

      public: 
Stack(){
    top=-1;
}

void Push(int x){
    if(top == MAX_SIZE-1){
        cout<<"Error : Stack overflow"<<endl;
        return;
    }
    top = top+1;
    A[top] = x;
}

void Pop(){
    if(top == -1){
        cout<<"Error : Stack is empty"<<endl;
        return;
    }
    top--;
}

int Top(){
    return A[top];
}

void print(){
    cout<<"Stack: ";
    for(int i=0;i<=top;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
};

int main() {
     // Code to test the implementation. 
    // calling print() after each push or pop to see the state of stack. 
	Stack S;
	S.Push(2); S.print();
	S.Push(5); S.print();
	S.Push(10); S.print();
	S.Pop(); S.print();
	S.Push(12); S.print();
}
