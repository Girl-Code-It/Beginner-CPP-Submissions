
//Find Merge Point of Two Lists

int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* temp=head2;
while(head1){
    head2=temp;
    while(head2){
        if(head1==head2){
            return head1->data;
        }
        head2=head2->next;
    }
    head1=head1->next;
}
return temp->data;
}
