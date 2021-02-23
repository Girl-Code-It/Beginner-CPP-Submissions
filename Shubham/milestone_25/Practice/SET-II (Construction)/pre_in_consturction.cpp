class Solution {
public:
    
    int search(vector<int> A, int low, int high, int data)
    {
        for(int i = low; i<= high; i++)
            if(A[i] == data)
                return i;
        return -1;
    }
    
    TreeNode* build(vector<int>pre, int preStart, int preEnd, vector<int> in, int inStart, int inEnd)
    {
        if(inStart > inEnd)
            return nullptr;
        
        
        int rootIndex = search(in, inStart, inEnd, pre[preStart]);
        TreeNode* root = new TreeNode(pre[preStart]);
        
        int leftTreeSize = rootIndex - inStart;
        int rightTreeSize = inEnd - rootIndex;
        
        root->left = build(pre, preStart + 1, preStart + leftTreeSize, in, inStart, rootIndex - 1);
        root->right = build(pre, preEnd - rightTreeSize + 1, preEnd, in, rootIndex + 1, inEnd);
                
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        return build(preorder, 0, preorder.size() -1, inorder, 0, inorder.size() -1);
    }
};
