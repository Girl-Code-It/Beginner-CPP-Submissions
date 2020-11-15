#include <iostream>
#include<stack>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = NULL;

void insert(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head=temp;
}

void reverse(){
    stack<struct Node*> s;
    Node* temp = head;
    while(temp){
        s.push(temp);
        temp = temp->next;
    }

    temp = s.top();
    head = temp;
    s.pop();

    while(!s.empty()){
        temp->next = s.top();
        s.pop();
        temp=temp->next;
    }
    temp->next = NULL;
}

void print(){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main() {
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    print();
    reverse();
    print();
}
