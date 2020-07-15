bool search(Node* root,int x)
{
    if(!root)
        return false;

    if(x == root->data)
        return true;

    else if(x < root->data)
        return search(root->left,x);

    else
        return search(root->right,x);
}