#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
Node* front=NULL;
Node* rear=NULL;

void insert(int x){
	struct Node*temp=new Node();
	temp->data=x;
	temp->next=NULL;
	if(front==NULL){
		front=temp;
		rear=temp;
	}else{
		rear->next=temp;
		rear=temp;
	}
	return ;
}
void remove(){
	struct Node*temp=new Node();
	if(isEmpty){
		cout<<"Queue is empty";
	}else if(front==rear){
		temp=front;
		delete(temp);
		front=rear=NULL;
	}else{
		temp=front;
		front=front->next;
		delete(temp);	
	}
	return;
}
void print(){
	struct Node* temp=front;
	while(temp!=rear){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<temp->data;
	return ;
}
bool isEmpty(){
	if(front==NULL && rear==NULL){
		return true;
	}
	return false;
}
int main(){
	for(int i=0;i<5;i++){
		int x;
		cout<<"Enter the data to enter: ";
		cin>>x;	
		insert(x);
		print();
		cout<<"\n";		
	}
	cout<<"After deleting: ";
	remove();
	print();
	return 0;
}
