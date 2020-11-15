
//Delete a Node at a specific position in a linked list

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode* temp = head;
    if(position==0){
        head=temp->next;
        free(temp);
        return head;
    }
    else{
    for(int i=0;i<position-1;i++){
         temp=temp->next;
    }
    SinglyLinkedListNode* temp2 = temp->next;
    temp->next=temp2->next;
    free(temp2);}
    return head;
}
