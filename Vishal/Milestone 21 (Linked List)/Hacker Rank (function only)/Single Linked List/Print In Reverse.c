void reversePrint(SinglyLinkedListNode* head)
{
 
   if(head == NULL)
   return ;
 
   reversePrint(head -> next);
   printf("%d\n",head -> data);
    
}