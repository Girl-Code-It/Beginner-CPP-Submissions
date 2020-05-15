
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head,int position)
{
    //Extra space for new Node
  SinglyLinkedListNode* temp = head;

    if(position == 0)
    {
        //Head node is deleted and
        //Now head is pointed to next element
        head = temp -> next;
        free(temp);
        return head;
    }
    
    for(int i=0;i<position-1;i++)
      temp = temp -> next;
    
    //Pointer who point to N'th node
    SinglyLinkedListNode* temp1 = temp -> next;
    
    temp -> next = temp1 -> next;
    
    //delete N'th node
    free(temp1);
    
   return head;
}