#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head;

void insert(int data){
    Node* temp = new Node();
    temp->data = data;
    temp->next=NULL;
    if(head == NULL){
        head=temp;
        return;
    }
    Node* last=head;
    while(last->next){
        last = last->next;
    }
    last->next = temp;
}

void print(){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next; 
    }
    cout<<endl;
}

void reverse(int m ,int n){
    Node *current,*prev,*next,*temp,*last;
    temp=head;
    prev=NULL;
    
    for(int i=0;i<m-2;i++){
        temp=temp->next;
    }

    for(int i=0;i<m-1;i++){
        last=last->next;
    }
    prev=last;
    current=temp->next;

    for(int i=m;i<=n;i++){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    temp->next = head;
    head=temp;
}

int main() {
    head = NULL;
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print();
    reverse(2,4);
    print();
}
