SinglyLinkedListNode *insertNodeAtPosition(SinglyLinkedListNode *head, int data, int position)
{
    // a pointer to point next link.
    SinglyLinkedListNode *temp1 = (SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
    (*temp1).data = data; //store the entered value in the list.
    (*temp1).next = NULL; //make next index variable null.

    if (position == 1) //if insertion taking place at beginning.
    {
        (*temp1).next = head; // push head to the next address.
        head = temp1;         //store the newly entered no at head.
        return head;          //and simply return it.
    }

    SinglyLinkedListNode *temp2 = head; //temp2 is to link with (n-1)th node.

    for (int i = 0; i < position - 1; i++) //iterate to get (n-1)th node address.
        temp2 = (*temp2).next;

    (*temp1).next = (*temp2).next; //store new address.
    (*temp2).next = temp1;
    return head;
}
