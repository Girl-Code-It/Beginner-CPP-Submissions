SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {

    SinglyLinkedListNode* p = head;
    SinglyLinkedListNode* q = nullptr;
        
    if(position == 0)
    {
        head = head->next;
        delete p;
    }
    else
    {
        for(int i=0; i<position; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        delete p;
    }
    return head;
}

