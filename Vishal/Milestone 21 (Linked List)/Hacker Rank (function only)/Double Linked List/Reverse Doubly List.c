DoublyLinkedListNode* reverse(DoublyLinkedListNode* head)
{
    struct DoublyLinkedListNode *prev,*temp = head,*newHead = head;
     
    while (temp != NULL)
    {
        prev = temp -> prev;
        temp -> prev = temp -> next;
        temp -> next = prev;
        newHead = temp;
        temp = temp -> prev;
    }
    return newHead;
}