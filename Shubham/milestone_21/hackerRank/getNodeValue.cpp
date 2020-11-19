int getLength(SinglyLinkedListNode* head)
{
    if(head == nullptr)
        return 0;
    SinglyLinkedListNode* temp = head;
    int length =0;
    while(temp->next != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}
int getNode(SinglyLinkedListNode* head, int positionFromTail) {

    int n = getLength(head);
    int positionFromHead = n - positionFromTail;
    SinglyLinkedListNode* temp = head;
    for(int i=0; i<positionFromHead; i++)
    {
        temp = temp->next;
    }
    return temp->data;
    /**9-**/
}

