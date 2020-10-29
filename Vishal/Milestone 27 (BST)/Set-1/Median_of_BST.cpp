void inorder(struct Node* root,vector<int>&v)
{
    if(!root)
        return ;
        
   inorder(root->left,v);
   v.push_back(root->data);
   inorder(root->right,v);
}

float findMedian(struct Node* root)
{
    vector<int>v;
    inorder(root,v);
    int n = v.size();
    
    if(n&1)
        return v[(n+1)/2-1];
    else
        return (v[n/2] + v[n/2 - 1])/2.0;

}