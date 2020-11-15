//Cycle Detection linked list

bool has_cycle(SinglyLinkedListNode* head) {
SinglyLinkedListNode* temp1=head;
SinglyLinkedListNode* temp2=head;
if(head==NULL){
    return 0;
}
while(temp2 && temp1 && temp1->next){
    temp2=temp2->next;
    temp1=temp1->next->next;
    if(temp1==temp2){
        return 1;
    }
}
return 0;

}
