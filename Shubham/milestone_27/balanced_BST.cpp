class Solution {
public:
    
    void inorderTraversal(TreeNode* root, vector<int> &A)
    {
        if(root == nullptr)
            return;
    
        inorderTraversal(root->left, A);
        A.push_back(root->val);
        inorderTraversal(root->right, A);
    }
    
    TreeNode* buildTree(vector<int> A, int start,int end)
    { 
        if(start > end)
            return nullptr;
        
        int mid = (start + end) / 2;
        TreeNode* root = new TreeNode(A[mid]);
        root->left = buildTree(A, start, mid-1);
        root->right = buildTree(A, mid+1, end);
        
        return root;
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        
        vector<int> A;
        inorderTraversal(root, A);
        
        return buildTree(A, 0, A.size()-1);
    }
};
