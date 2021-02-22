#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
};
struct Node* head;
void insert(int x,int n){
	Node *temp=new Node();
	Node *a;
	Node *prev=head;
	temp->data=x;
	if(n==1){
		temp->next=head;
		head=temp;
		return;
	}
	for(int i=0;i<n-2;i++){
		prev=prev->next;
	}
	a=prev->next;

	temp->next=a;
	prev->next=temp;
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
//	cout<<"Enter the position : ";
//	cin>>n;
//	cout<<"Enter the elememts to be inserted :\n";
//	cin>>x;
	insert(2,1);  //2
	insert(3,2);  //2 3
	insert(4,3);  //2 3 4
	insert(5,2);  //2 5 3 4
	insert(6,4);  //2 5 3 6 4
	insert(8,3);  //2 5 8 3 6 4
	print();
}
