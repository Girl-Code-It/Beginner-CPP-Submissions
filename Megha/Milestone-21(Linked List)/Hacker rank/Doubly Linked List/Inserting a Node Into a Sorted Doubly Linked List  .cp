//Inserting a Node Into a Sorted Doubly Linked List

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data)
{
    DoublyLinkedListNode* temp = new DoublyLinkedListNode(data);
    if(head==NULL){
        return temp;
    }
    else if(data <= head->data){
        temp->next=head;
        head->prev=temp;
        return temp;
    }
    else{
        DoublyLinkedListNode* temp2 = sortedInsert(head->next,data);
        head->next=temp2;
        temp2->prev=head;
        return head;
    }
}
