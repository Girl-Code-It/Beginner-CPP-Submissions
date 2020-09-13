int countLeaves(Node* root)
{
    //NULL node
    if(!root)
        return 0;
        
    //Leaf Node
    if(!root->left && !root->right)
        return 1;
        
    //else check for their child
    return countLeaves(root->left) + countLeaves(root->right);
    
}