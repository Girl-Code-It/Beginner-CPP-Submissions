#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* top = NULL;

void Push(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = top;
    top = temp;
}

void Pop(){
    if(top == NULL){
        return;
    }
    Node* temp = top;
    top = top->next;
    free(temp);
}

void print(){
    Node* temp = top;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main() {
    Push(2); print();
    Push(4); print();
    Push(6); print();
    Pop(); print();
    Push(8); print();
}
