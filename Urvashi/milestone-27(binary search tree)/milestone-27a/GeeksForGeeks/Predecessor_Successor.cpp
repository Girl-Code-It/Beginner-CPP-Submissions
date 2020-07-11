oid findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(!root) return ;
    if(root->key == key) 
    {
        if(root->left)
        {
            Node* temp = root->left ;
            while(temp->right)
                temp = temp->right ;
            pre = temp ;
        }
        
        if(root->right)
        {
            Node* temp = root->right ;
            while(temp->left)
                temp = temp->left ;
            suc = temp ;
        }
        return ;
    }
    
    if(key < root->key)
    {
        suc = root ;
        findPreSuc(root->left, pre, suc, key) ;
    }
    
    else
    {
        pre = root ;
        findPreSuc(root->right, pre, suc, key) ;
    }

}
