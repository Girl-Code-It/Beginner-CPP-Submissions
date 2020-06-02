
SinglyLinkedListNode* insertAtTail(SinglyLinkedListNode* llist, int data)
{
    //Extra space for new Node
  SinglyLinkedListNode* temp = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
   
   //Store the value in the list
   (*temp).data = data;
   
   //Store the address
   (*temp).next = llist;

   //Head Point to New node / head node
   llist = temp;

   return llist;
}