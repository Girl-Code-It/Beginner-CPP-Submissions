
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data,int position)
{
    //Extra space for new Node
  SinglyLinkedListNode* temp = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
   
   //Store the value in the Node
    temp -> data  = data;

    //Initialize address as NULL
    temp -> next = NULL;

    //If Insertion taking place at Beginning
    if(position == 0)
    {
        temp -> next  = head;
        head = temp;//It Point Head Node
        
        return head;
    }

   //To connect link with (n-1)th Node
    SinglyLinkedListNode* temp1 = head;

   //Iterate to get (n-1)th Node address
   for(int i = 0;i < position-1 ; i++)
     temp1 = temp1 -> next;

   //Store new address
   temp -> next = temp1 -> next;

   temp1 -> next = temp;

   return head;
}