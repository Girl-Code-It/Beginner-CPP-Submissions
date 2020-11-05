//linked list:Inserting a node at beginning
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct Node* head;    //global variable that can be accessed anywhere

void insert(int data){  //inserting node at the end of the list
    Node* temp1 = new Node();
    temp1->data=data;
    temp1->next=NULL;
    if(!head){
    head=temp1;
    return;
    }
    Node* temp2 = head;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}

void print(){ //print all the elements
    Node* temp=head;
    cout<<"List is: "<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void Delete(int n){
    Node* temp1 = head;
    if(n==1){
        head=temp1->next;
        free(temp1);
        return;
    }
    for(int i=0;i<n-2;i++){
        temp1=temp1->next;
    }
     Node* temp2 = temp1->next;
    temp1->next=temp2->next;
    free(temp2);
}

int main() {
    head=NULL;
    insert(2);
    insert(4);
    insert(6);
    insert(5);
    print();
    int n;
    cout<<"Enter a position: "<<endl;
    cin>>n;
    Delete(n);
    print();
}
