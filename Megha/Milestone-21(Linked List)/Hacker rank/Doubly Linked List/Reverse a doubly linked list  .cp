//Reverse a doubly linked list

DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
DoublyLinkedListNode *current = head,*newCurrent = head,*prev;
while(current!=NULL){
    prev=current->prev;
    current->prev=current->next;
    current->next=prev;
    newCurrent=current;
    current=current->prev;
}
return newCurrent;
}
