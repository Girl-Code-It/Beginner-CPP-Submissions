//Program to Delete n'th Node

#include<stdio.h>
#include<stdlib.h>

//typedef so we can simply use Node instead of struct Node
typedef struct Node
{
    //To store the element
    int data ;
    //To store the address of next element
    struct Node *next;

} Node;

//Pointer to head Node initialize to NULL
Node* head = NULL;

void Insert(int data,int n)
{
    //A pointer to point next link
    Node* temp1 = (Node*)malloc(sizeof(Node));

    //Store the value in the list
    temp1 -> data  = data;

    //Initialize address as NULL
    temp1 -> next = NULL;

    //If Insertion taking place at Beginning
    if(n == 1)
    {
        temp1 -> next  = head;
        head = temp1;
        return ;
    }

    //To connect link with (n-1)th Node
    Node* temp2 = head;

    //Iterate to get (n-1)th Node address
    for(int i = 0; i < n-2 ; i++)
        temp2 = temp2 -> next;

    //Store new address
    temp1 -> next = temp2 -> next;
    temp2 -> next = temp1;

}

//Fxn to delete N'th Node
void Delete(int n)
{
    Node* temp1 = head;

    if(n == 1)
    {
        //Head node is deleted and
        //Now head is pointed to next element
        head = temp1 -> next;
        free(temp1);
        return ;
    }
    
    for(int i=0;i<n-2;i++)
      temp1 = temp1 -> next;
    
    //Pointer who point to N'th node
    Node* temp2 = temp1 -> next;
    
    temp1 -> next = temp2 -> next;
    
    //delete N'th node
    free(temp2);
}

void Print()
{
    //Initialize to Head Node
    Node* temp = head;

    printf("List is : ");

    //Print until Last node
    while(temp != NULL)
    {
        printf("%d ",(*temp).data);
        temp = (*temp).next;
    }

    printf("\n");
}

int main()
{

    Insert(2,1);// 2
    Insert(3,2);// 2 3
    Insert(4,2);// 2 4 3
    Insert(6,1);// 6 2 4 3
    Insert(5,3);// 6 2 5 4 3
    Print();
    
    int n;
    printf("Enter the position to delete ");
    scanf("%d",&n);
    Delete(n);
    Print();
    return 0;
}