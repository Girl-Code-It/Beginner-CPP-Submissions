
//Insert a node at a specific position in a linked list

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);
    temp->data=data;
    temp->next=NULL;
    if(position==1){
        temp->next=head;
        head=temp;
    }
    else{
    SinglyLinkedListNode* temp2 = head;
    for(int i=0;i<position-1;i++){
         temp2=temp2->next;
    }
    temp->next=temp2->next;
    temp2->next=temp;}
    return head;
}


