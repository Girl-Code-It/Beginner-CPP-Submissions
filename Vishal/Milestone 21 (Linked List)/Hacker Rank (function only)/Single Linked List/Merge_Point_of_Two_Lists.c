int findMergeNode(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{
    struct SinglyLinkedListNode *temp = head1, *temp1 = head2;
    int A_size = 0, B_size = 0;

    while (temp)
    {
        A_size++;
        temp = temp->next;
    }
    while (temp1)
    {
        B_size++;
        temp1 = temp1->next;
    }

    temp = head1, temp1 = head2;

    while (temp && A_size > B_size)
    {
        A_size--;
        temp = temp->next;
    }

    while (temp1 && B_size > A_size)
    {
        B_size--;
        temp1 = temp1->next;
    }

    while (temp && temp1)
    {
        if (temp == temp1)
            return temp->data;
        temp1 = temp1->next;
        temp = temp->next;
    }

    return 0;
}