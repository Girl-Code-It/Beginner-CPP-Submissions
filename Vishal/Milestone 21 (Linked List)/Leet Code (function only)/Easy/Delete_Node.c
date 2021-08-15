void DeleteNode(Node *Del)
{
  Node *temp = Del->next;
  *Del = *Del->next;
  free(temp);
}