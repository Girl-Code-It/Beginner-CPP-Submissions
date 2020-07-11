bool check(Node* root , int min , int max)
{
    if(!root) return true;
    return (root->data > min && root->data < max 
    && check(root->left , min , root->data)
    && check(root->right , root->data , max)) ;
}

bool isBST(Node* root) {
    return check(root , INT_MIN , INT_MAX) ;
}
