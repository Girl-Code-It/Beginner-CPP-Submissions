
// Merge two sorted linked lists

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    struct SinglyLinkedListNode* newNode = (SinglyLinkedListNode*)malloc(sizeof      (struct SinglyLinkedListNode));
    SinglyLinkedListNode* head = newNode;
    while(head1 && head2){
    if(head1->data < head2->data){
    newNode->next=head1;
    head1=head1->next;}
    else{
    newNode->next=head2;
    head2=head2->next;}
    newNode=newNode->next;
    }
    if(head1){
    newNode->next=head1;
    head1=head1->next;
    }
    if(head2){
    newNode->next=head2;
    head2=head2->next;
    }
    return head->next;
}
