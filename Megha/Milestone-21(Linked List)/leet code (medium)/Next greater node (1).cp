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
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return;
    }
    Node* temp2 = head;
    while(temp2->next){
        temp2=temp2->next;
    }
    temp2->next=temp;
    return;
}

int greaterNode(){
    Node* temp1 = head;
    Node* temp2 = temp1->next;
    int ans = 0;
    while(temp1){
        temp2=temp1->next;
        while(temp2){
            if(temp2->data > temp1->data){
            ans = temp2->data;
             cout<<ans<<" ";
            break;
            }
            else{
            temp2=temp2->next;}
        }
        if(temp2 == NULL){
            ans = 0;
            cout<<ans<<" ";
        }
        temp1=temp1->next;
    }
    return 0;
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
    }
    print();
    greaterNode();
}

