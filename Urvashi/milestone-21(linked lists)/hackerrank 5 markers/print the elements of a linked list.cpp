//Linked list :Inserting a node at beginning.

#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;//variable to store data of type int .
	node* next;//variable to store address of next element.
};

node* Insert (node* head,int x)
{

node* temp=new node();	// a pointer to point next link.
temp->data=x;           //storing the value of x in linked list.
temp->next=head;        //storing the head to the next address.
head=temp;              //inserting entered no at the place of head.

return head;
}

void Print(node* head)
{
  
	while(head!=NULL)   //to print the list upto end node.
	{
		cout<<head->data<<endl; //printing nodes.
		head=head->next;        //updating temp to next node to print all one by one.
	}
}
int main()
{
	node *head=NULL; //empty list
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cin>>x;
	Insert(head,x);	
	Print(head);
    }

}
