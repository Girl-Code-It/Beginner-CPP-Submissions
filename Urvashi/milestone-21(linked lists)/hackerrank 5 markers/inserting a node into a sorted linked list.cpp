DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
DoublyLinkedListNode* NewNode = (DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
NewNode->data = data;
NewNode->next = NULL;
NewNode->prev = NULL;
if(head==NULL)
return NewNode;
else if(data <= head->data)
{
   NewNode->next = head;
   head->prev = NewNode;
   return NewNode; 
}
else {
   DoublyLinkedListNode *temp =  sortedInsert(head->next,data);
   head->next = temp;
   temp->prev = head;
   return head;
}
}
