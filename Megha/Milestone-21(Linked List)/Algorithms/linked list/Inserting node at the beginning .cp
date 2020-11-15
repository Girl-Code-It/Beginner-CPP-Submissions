//linked list:Inserting a node at beginning
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct Node* head;    //global variable that can be accessed anywhere

void insert(int x){
    Node* temp = new Node();
    temp->data=x;
    temp->next=head;
    head=temp;
}

void print(){
    Node* temp=head;
    cout<<"List is: "<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main() {
    head=NULL;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        insert(x);
        print();
    }
}
