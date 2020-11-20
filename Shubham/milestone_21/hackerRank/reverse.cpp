int countNodes(SinglyLinkedListNode* head)
{
    int count =0;
    SinglyLinkedListNode* p = head;
    
    while(p->next != nullptr)
    {
        count++;
        p = p->next;
    }
    count++;
    
    return count;
}
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {

    int n = countNodes(head);
    int A[n];
    
    SinglyLinkedListNode* p = head;
    int i=0;
    while(p != nullptr)
    {
        A[i++] = p->data;
        p = p->next;
    }
    i--;
    p = head;
    while(i >= 0)
    {
        p->data = A[i--];
        p = p->next;
    }
    return head;
}

