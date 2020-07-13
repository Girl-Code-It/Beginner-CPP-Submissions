void inorder(struct Node* root , vector<int>&v)
{
    if(!root) return ;
    inorder(root->left , v) ;
    v.push_back(root->data) ;
    inorder(root->right , v) ;
}

bool findPair(vector<int>&v, int target)
{
    int l = 0 , h = v.size() - 1 ;
    while(l < h)
    {
        if(v[l] + v[h] == target) return true ;
        else if(v[l] + v[h] < target) l++ ;
        else h-- ;
    }
    return false ;
}

bool isPairPresent(struct Node *root, int target)
{
    vector<int>v;
    inorder(root , v) ;
    sort(v.begin() , v.end()) ;
    return findPair(v, target) ;
}
