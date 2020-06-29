int counthalfNodes(Node* root)
{
     //NULL node
    if(!root)
        return 0;
        
    //half Node
    if((!root->left && root->right) || (root->left && !root->right))
        return 1;
        
    //else check for their child
    return counthalfNodes(root->left) + counthalfNodes(root->right);
    
}