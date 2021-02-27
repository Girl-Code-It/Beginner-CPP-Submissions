//advantages of doubly LL is: we can easily reverse the list and we can delete node easily as compared to single LL
//disadvantages : need extra pointer that means extra memory
#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node* prev;
}; struct Node* head;

void insertHead(int x){
	struct Node* temp=new Node();
	temp->data=x;
	temp->next=NULL;
	temp->prev=NULL;
	if(head==NULL){
		head=temp;
		return ;
	}
	temp->next=head;
	head->prev=temp;
	head=temp;
	return ;
}
void insertTail(int x){
	struct Node* temp=new Node();
	struct Node* a=head;
	temp->data=x;
	temp->next=NULL;
	temp->prev=NULL;
	if(head==NULL){
		head=temp;
		return ;
	}
	while(a->next!=NULL){
		a=a->next;
	}
	a->next=temp;
	temp->prev=a;
	return ;
}
void printF(){
	struct Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
void printB(){
	struct Node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->prev;
	}
}
int main(){
	head=NULL;
	insertHead(2);  //2
	insertTail(3);   //2 3
	insertHead(8);  // 8 2 3
	insertTail(6);  //8 2 3 6
	insertHead(9);   //9 8 2 3 6
	insertTail(1);  //9 8 2 3 6 1
	cout<<"Forward:\n";
	printF();
	cout<<"\nBackward:\n";
	printB();
	return 0;
}
