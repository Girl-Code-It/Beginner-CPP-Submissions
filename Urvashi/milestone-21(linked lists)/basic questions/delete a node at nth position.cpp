//Linked list :deleting a node at nth position.

#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;   //variable to store data of type int .
	node* next; //variable to store address of next element.
};

//pointer to head node.
node* head; // global variable , can be accessed from anywhere .

//deletes node at position n
void Delete(int n)
{
	node* temp1=head;
	
	if(n==1) // to delete head node.
	{
		head=temp1->next;//head now points to second node.
		delete temp1;
		return ;
	}
	for(int i=0;i<n-2;i++)
	temp1 =temp1->next;
	
    //temp1 points to (n-1)th node.
    node* temp2 = temp1->next; //nth node.
    temp1->next = temp2->next;// n is fixed from nth node to (n+1)th node.
    delete temp2 ;            //delete nth node.
}

void Insert (int x)
{

node* temp=new node();	// a pointer to point next link.
temp->data=x;           //storing the value of x in linked list.
temp->next=head;        //storing the head to the next address.
head=temp;              //inserting entered no at the place of head.

}

void Print()
{
	node* temp=head;    // initialise temp to head node.
	cout<<"List is :"<<endl;
	while(temp!=NULL)   //to print the list upto end node.
	{
		cout<<(*temp).data<<"  "; //printing nodes.
		temp=(*temp).next;        //updating temp to next node to print all one by one.
	}
	cout<<"\n";
}
int main()
{
	head=NULL; //empty list
    Insert(2);//List : 2
    Insert(4);//List : 4,2
    Insert(6);//List : 6,4,2
    Insert(5);//List : 5,6,4,2
    Print();
    int n;
    cout<<"Enter a position : "<<endl;
    cin>>n;
    Delete(n);
	Print();
}
