class Solution{
  public:
    // Return a integer of integers having all the nodes in both the BSTs in a sorted order.
    
    vector<int> mergeSortedArray(vector<int> A1, vector<int> A2)
    {
        int i1 = 0, i2 = 0;
        
        vector<int> r;
        
        while(i1 < A1.size() && i2 < A2.size())
        {
            if(A1[i1] < A2[i2])
                r.push_back(A1[i1++]);
            else
                r.push_back(A2[i2++]);
        }
        
        while(i1 < A1.size())
            r.push_back(A1[i1++]);
        
        while(i2 < A2.size())
            r.push_back(A2[i2++]);
            
        return r;
    }
    
    void inorderTraversal(Node* root, vector<int> &A)
    {
        if(root == nullptr)
            return;
        
        inorderTraversal(root->left, A);
        A.push_back(root->data);
        inorderTraversal(root->right, A);
    }
    vector<int> merge(Node *root1, Node *root2)
    {
        
        vector<int> A1, A2;
        
        inorderTraversal(root1, A1);
        inorderTraversal(root2, A2);
       
        return mergeSortedArray(A1, A2);
       
       
    }
};
