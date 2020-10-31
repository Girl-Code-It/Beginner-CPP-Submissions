SinglyLinkedListNode *insertNodeAtTail(SinglyLinkedListNode *head, int data)
{
    //Extra space for new Node
    SinglyLinkedListNode *temp = (SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
    //Store the value
    temp->data = data;
    //To append at end
    temp->next = NULL;
    //If list was empty then it is a head Node
    if (head == NULL)
        head = temp;
    else
    {
        //To Storing the address we need a variable
        SinglyLinkedListNode *temp1 = head;
        //Second Last Node
        while (temp1->next != NULL)
            temp1 = temp1->next;

        temp1->next = temp;
    }
    return head;
}
