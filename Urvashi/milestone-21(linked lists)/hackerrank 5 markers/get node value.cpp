int getNode(SinglyLinkedListNode* head, int positionFromTail) {
int count=0;
SinglyLinkedListNode* temp=head;
while(head!=NULL)
{
    if(positionFromTail<count)
   { 
    temp=temp->next  ;
   }
    count++;
    head=head->next;
}
return temp->data;
}
