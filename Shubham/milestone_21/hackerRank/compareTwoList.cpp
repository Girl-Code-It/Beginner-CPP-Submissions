int getLength(SinglyLinkedListNode* head)
{
    SinglyLinkedListNode* temp = head;
    int n=0;
    while(temp->next != nullptr)
    {
        n++;
        temp = temp->next;
    }
    return ++n;
}
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    if(getLength(head1) != getLength(head2))
        return 0;
   
    
    else
    {
        int flag = 0;
        SinglyLinkedListNode* p = head1;
        SinglyLinkedListNode* q = head2;
        
        while(p != nullptr)
        {
            if(p->data != q->data)
            {
                flag = 1;
                break;
            }
            p = p->next;
            q = q->next;
        }
        if(flag == 0)
            return 1;
        return 0;
    }
        
}
