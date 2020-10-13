DoublyLinkedListNode *reverse(DoublyLinkedListNode *head)
{
    DoublyLinkedListNode *temp = head;
    while (temp)
    {
        head = temp;
        temp = head->next;
        head->next = head->prev;
        head->prev = temp;
    }
    return head;
}
