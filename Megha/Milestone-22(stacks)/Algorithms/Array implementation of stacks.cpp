#include <iostream>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;
using namespace std;

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

int main() {
    Push(2); print();
    Push(5); print();
    Push(10); print();
    Pop(); print();
    Push(7); print();
}
