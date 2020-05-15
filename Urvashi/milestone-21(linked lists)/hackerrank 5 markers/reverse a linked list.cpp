SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {

    SinglyLinkedListNode *current ,*prev,*next ;// taking three pointers , current to store current position's address, next for next , and prev for previous.
    current=head;               //initially we are starting with head node.
    prev=NULL;                  //that's why previous node address is NULL.
    while(current!=NULL)        //iterating upto last node.
    {
        next = current->next;//store the address of next node in variable next.
        current->next=prev;  // link of the current node is set as the address of the previous node.
        prev= current;       //now come to the next index .
        current = next;
    }
    head = prev; //at the end of the while loop , the variable prev will store the address of the last element  so make the last element to head.
    return head;
}

