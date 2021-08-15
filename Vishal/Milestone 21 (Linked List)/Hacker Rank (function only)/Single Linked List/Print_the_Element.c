void printLinkedList(SinglyLinkedListNode *head)
{
    if(head == NULL)
        return ;

    printf("%d\n",head -> data);
    printLinkedList(head -> next);
}