void findPre(Node* root, Node*& pre)
{
    //predecessor will be the rightmost child in left subtree(root), if exists
    while(root->right)
        root = root->right;
    pre = root;
}

void findSuc(Node*& root, Node* &suc)
{
    //successor will be the leftmost child in the rigt subtree(root), if exists
    
    while(root->left)
        root = root->left;
    suc = root;
}
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    pre = suc = nullptr;
    while(root != nullptr)
    {
        if(root->key == key)
            break;
        else if(key < root->key)
        {
            suc = root;
            root = root->left;   
        }
        else
        {
            
            pre = root;
            root = root->right;
        }
    }
    
    if(root->left)  findPre(root->left, pre);
    if(root->right) findSuc(root->right, suc);
    
    if(pre) cout << pre->key << endl;
    else cout << -1 << endl;
    
    if(suc) cout << suc->key << endl;
    else cout << -1 << endl;

}
