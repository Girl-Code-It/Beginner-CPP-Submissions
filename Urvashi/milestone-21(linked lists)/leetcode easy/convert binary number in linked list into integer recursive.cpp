//Linked list :deleting a node at nth position.

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

struct node{
	int data;   //variable to store data of type int .
	node* next; //variable to store address of next element.
};

//pointer to head node.
node* head; // global variable , can be accessed from anywhere .

// function to convert binary linked list nodes into one decimal no.
int getDecimalValue() {
	    int ans=0;
        if( head == NULL  )
        return ans ;
        ans=ans*2+(head->data);
        getDecimalValue(head->next);
        return ans;
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
	cout<<" How many numbers? "<<endl;
	int n,x,ans;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cout<<" Enter the number "<<endl;
	cin>>x;
	Insert(x);
	Print();
    }
    cout<<"decimal value is= "<<endl;
    ans=getDecimalValue() ;
    cout<<ans<<endl;
}
