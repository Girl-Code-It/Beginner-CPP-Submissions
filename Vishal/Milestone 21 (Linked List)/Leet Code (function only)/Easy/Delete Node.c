
void DeleteNode(Node *Del)
{
  Del -> data = Del -> next -> data;
  Del -> next = Del -> next -> next;
}
