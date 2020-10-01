int countfullNodes(Node* root)
{
     //NULL node
    if(!root)
        return 0;
        
    //full Node
    if(root->left && root->right)
        return 1;
        
    //else check for their child
    return 1+countfullNodes(root->left) + countfullNodes(root->right);
    
}