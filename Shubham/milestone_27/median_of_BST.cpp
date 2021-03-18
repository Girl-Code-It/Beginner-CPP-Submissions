
vector<int> A;

void inorderTraversal(struct Node* root)
{
    if(root == nullptr)
        return;
    inorderTraversal(root->left);
    A.push_back(root->data);
    inorderTraversal(root->right);
}


float findMedian(struct Node *root)
{
      //Code here
    A.clear();
    inorderTraversal(root);
    
    
    if(A.size()%2 != 0)
        return A[A.size()/2];
    else
    {
        int n = A.size()/2;
        float x = A[n];
        float y = A[n-1];
        
        return (x+y)/2;
    }
}
