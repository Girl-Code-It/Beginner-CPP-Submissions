
// Get Node Value

int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode *current,*next,*prev;
    current = head;
    prev=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    SinglyLinkedListNode *temp=head;
    for(int i=0;i<positionFromTail;i++){
        temp=temp->next;
    }
    return temp->data;
}
