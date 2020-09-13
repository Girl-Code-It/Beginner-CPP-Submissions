int getCountOfNode(Node* root,int l,int h)
{
    if(!root)
        return 0;
        
    bool flag = (root->data >= l && root->data < h);
    int count = 0;
    
    if((flag && root->data > l) || root->data > h)
        count = getCountOfNode(root->left,l,h);
        
    if(flag || root->data < l)
        count += getCountOfNode(root->right,l,h);
        
    return flag + count;
}