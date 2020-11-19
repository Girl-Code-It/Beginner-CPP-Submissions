SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    
    SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* p = head;
    SinglyLinkedListNode* q = nullptr;
    
    for(int i=0; i<position; i++)
    {
        q = p;
        p = p->next;
    }
    q->next = temp;
    temp->next = p;
    
    return head;

}
