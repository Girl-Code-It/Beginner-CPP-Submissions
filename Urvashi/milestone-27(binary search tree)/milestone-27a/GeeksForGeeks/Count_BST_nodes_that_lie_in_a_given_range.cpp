int getCountOfNode(Node *root, int l, int h)
{
  int count = 0 ; 
  if(!root) return 0 ;
  
  Node* temp = root ;
  
  if(temp->data >= l && temp->data <= h) count++ ;
  else if(temp->data < l) temp = temp->right ;
  else if (temp->data > h) temp = temp->left ;
  
  return count + getCountOfNode(root->left,l,h) 
  + getCountOfNode(root->right,l,h);
}

