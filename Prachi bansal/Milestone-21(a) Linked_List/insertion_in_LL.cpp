#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
};
struct Node* head;
int insert(int x){
	Node *temp=new Node();
	temp->data=x;
	temp->next=NULL;
	if(head!=NULL) temp->next=head;
	head=temp;
}
void print (){
	Node* temp=head;
	cout<<"List is: ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main(){
	int n,x;
	cout<<"Enter the number of elements to insert: ";
	cin>>n;
	cout<<"Enter the elememts to be inserted at start:\n";
	
	for(int i=0;i<n;i++){
		cout<<"\n";
		cin>>x;
		insert(x);
		print();
	}
}
