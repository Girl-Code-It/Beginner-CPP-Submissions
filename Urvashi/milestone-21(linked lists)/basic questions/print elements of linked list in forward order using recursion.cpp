//print a linked list using recursion.

#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
  int data;
  node* next;
};

void Print(node* p)
{
	if(p==NULL)//base condition.
	return ;
	cout<<p->data<<" "; // first print the value in the node.
	Print(p->next);//recursive call.
}

node* Insert (node* head,int data)
{

node* temp=new node();  // a pointer to point next link.
temp->data=data;     //store the entered value in the list.
temp->next=NULL;    //make next index variable null.

if(head==NULL)     //if insertion taking place at beginning.
head=temp;
else
{
	node* temp1 = head; // temp1 initially sets at address of head.
    while(temp1->next !=NULL) //iterating upto end.
    temp1=temp1->next;  
    temp1->next = temp;
}       
    return head;
}

int main()
{
	node* head=NULL; //local variable which is a pointer to head.
	head=Insert(head,2);
	head=Insert(head,4);
	head=Insert(head,6);
	head=Insert(head,8);
	Print(head);
}
