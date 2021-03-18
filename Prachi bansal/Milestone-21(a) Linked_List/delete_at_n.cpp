#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
}; struct Node* head;
void insert(int x){   //inserting at end
	struct Node* temp=new Node();
	struct Node* a=head;
	temp->data=x;
	temp->next=NULL;
	if(head==NULL){
		head=temp;
		return ;
	}
	while(a->next!=NULL){
		a=a->next;
	}
	a->next=temp;
	return ;
}
void DeletePtr(int n){
	struct Node* a=head;
	if(n==1){
		head=a->next;
		delete(a);
		return ;
	}	
	for(int i=0;i<n-2;i++){
		a=a->next;
	}
	struct Node* temp=a->next;
	a->next = temp->next;
	delete(temp);
}
void print(){
	struct Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main(){
	int n;
	head=NULL;
	insert(3);
	insert(2);
	insert(6);
	insert(5);
	insert(9);
	insert(1);
	cout<<"List is: \n";
	print();
	cout<<"\nEnter the position ";
	cin>>n;
	DeletePtr(n);
	print();
	return 0;
}
