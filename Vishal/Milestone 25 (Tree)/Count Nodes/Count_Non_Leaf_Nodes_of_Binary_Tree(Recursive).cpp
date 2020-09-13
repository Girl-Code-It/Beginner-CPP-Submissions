int countNonLeafNodes(Node* root)
{
     //NULL node
    if(!root)
        return 0;
        
    //Leaf Node
    if(!root->left && !root->right)
        return 0;
        
    //else check for their child
    return 1+countNonLeafNodes(root->left) + countNonLeafNodes(root->right);
    
}