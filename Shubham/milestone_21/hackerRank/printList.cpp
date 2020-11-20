void printLinkedList(SinglyLinkedListNode* head) {
    
    SinglyLinkedListNode* p = head;
    
    while(p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }

}
