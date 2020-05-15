int getNode(SinglyLinkedListNode* head, int positionFromTail)
{
    SinglyLinkedListNode *current = head,*ans = head;
    int index = 0;
    while(current)
    {
        current = current -> next;

        if(index++ > positionFromTail)
         ans = ans -> next;
    }
    
    return ans -> data;

}