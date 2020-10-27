
//Insert a Node at the Tail of a Linked List
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);
    temp->data=data;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
    SinglyLinkedListNode* temp2 = head;
    while(temp2->next!=NULL){
         temp2=temp2->next;
    }
    temp2->next = temp;}
   return head;
}


