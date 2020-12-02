void reversePrint(SinglyLinkedListNode* head) {

    if(head != nullptr)
    {
        reversePrint(head->next);
        printf("%d\n", head->data);
    }
}
