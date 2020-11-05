//To delete the duplicates from the linked list
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
//To delete the duplicates from the linked list
void deleteDupli(){
    Node* temp1=head;
    
    Node* temp=new Node();
    while(temp1->next!=NULL){
        if(temp1->data==temp1->next->data){
            temp=temp1->next->next;
            free(temp1->next);
            temp1->next=temp;
        }
        else{
            temp1=temp1->next;
        }
    }
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
    deleteDupli();
    print();
}
