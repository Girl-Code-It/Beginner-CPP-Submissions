SinglyLinkedListNode *deleteNode(SinglyLinkedListNode *head, int position)
{

    SinglyLinkedListNode *temp1 = head;

    if (position == 0) // to delete head node.
    {
        head = temp1->next; //head now points to second node.
        delete temp1;
        return head;
    }
    for (int i = 0; i < position - 1; i++)
        temp1 = temp1->next;

    //temp1 points to (n-1)th node.
    SinglyLinkedListNode *temp2 = temp1->next; //nth node.
    temp1->next = temp2->next;                 // n is fixed from nth node to (n+1)th node.
    delete temp2;                              //delete nth node.
    return head;
}
