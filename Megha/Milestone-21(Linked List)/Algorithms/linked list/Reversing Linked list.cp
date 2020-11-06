#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

struct Node* head;

void insert(int data){
    Node* temp1 = new Node();
    temp1->data=data;
    temp1->next=NULL;
    if(head==NULL){
        head=temp1;
        return;
    }
    Node* temp2 = head;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}

void print(){
    Node* temp = head;
    cout<<"The list is: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void reverse(){
    Node *current,*prev,*next;
    current=head;
    prev=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}

int main() {
    head=NULL;
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    print();
    reverse();
    print();
}

