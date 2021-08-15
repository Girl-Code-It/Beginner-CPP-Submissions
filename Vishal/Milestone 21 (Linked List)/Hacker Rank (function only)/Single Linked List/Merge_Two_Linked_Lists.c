struct SinglyLinkedListNode *mergeTwoLists(struct SinglyLinkedListNode *head1, struct SinglyLinkedListNode *head2)
{
    struct SinglyLinkedListNode *Merge = (struct SinglyLinkedListNode *)calloc(1, sizeof(struct SinglyLinkedListNode));
    struct SinglyLinkedListNode *head = Merge;

    while (head1 && head2)
    {
        Merge->next = (head1->data > head2->data) ? head2 : head1;

        if (Merge->next == head1)
            head1 = head1->next;
        else
            head2 = head2->next;

        Merge = Merge->next;
    }

    if (head1)
        Merge->next = head1;

    if (head2)
        Merge->next = head2;

    return head->next;
}