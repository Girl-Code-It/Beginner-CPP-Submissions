#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};struct Node*head;

void insert(int x){
	struct Node* temp1=new Node();
	temp1->data=x;
	temp1->next=NULL;
	if(head!=NULL) temp1->next=head;
	head=temp1;
	
}

void print(){
	struct Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
void reverse(){
	struct Node *current, *prev, *next;
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
int main(){
	head=NULL;
	insert(3);
	insert(1);
	insert(6);
	insert(4);
	insert(8);
	insert(9);
	cout<<"List before reversing: \n";
	print();
	cout<<"\nList after reversing: \n";
	reverse();
	print();
	return 0;
}
