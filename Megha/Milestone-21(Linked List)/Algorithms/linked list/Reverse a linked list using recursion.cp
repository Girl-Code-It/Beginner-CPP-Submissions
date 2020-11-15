#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

struct Node* head;

void insert(int data){
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    while(head==NULL){
        head=temp1;
        return;
    }
    Node* temp2 = head;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}

void print(Node* temp){  
    if(temp==NULL){
        cout<<endl;
        return;
    }
    cout<<temp->data<<" ";
    print(temp->next);
}

void reverse(Node* current){
    if(current->next==NULL){
        head=current;
        return;
    }
    reverse(current->next);
    Node* temp = current->next;
    temp->next=current;
    current->next=NULL;
}

int main() {
    head=NULL;
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    cout<<"Original list is: ";
    print(head);
    reverse(head);
    cout<<"After reversing the list is: ";
    print(head);
}
