
//Reverse a linked list

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
SinglyLinkedListNode *next,*prev,*current;
    current=head;
    prev=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}
