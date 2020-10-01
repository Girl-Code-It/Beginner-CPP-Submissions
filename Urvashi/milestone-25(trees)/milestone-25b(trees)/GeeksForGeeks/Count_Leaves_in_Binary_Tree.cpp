int countLeaves(Node* root)
{
  // Your code here
  if(!root)
    return 0;
    
  else if(root && !root->left && !root-> right)
        return 1;
        
    return countLeaves(root->left) + countLeaves(root->right);
}
