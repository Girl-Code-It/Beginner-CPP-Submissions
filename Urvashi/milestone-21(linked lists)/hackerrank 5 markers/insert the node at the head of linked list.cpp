SinglyLinkedListNode *insertNodeAtHead(SinglyLinkedListNode *llist, int data)
{
    // a pointer to point next link.
    SinglyLinkedListNode *temp = (SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
    temp->data = data;  //storing the value of x in linked list.
    temp->next = llist; //storing the head to the next address.
    llist = temp;       //inserting entered no at the place of head.
    return llist;
}
