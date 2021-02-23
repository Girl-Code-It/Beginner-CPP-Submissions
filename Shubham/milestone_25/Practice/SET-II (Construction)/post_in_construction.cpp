class Solution {
public:
    
    int search(vector<int> in, int low, int high, int e)
    {
        for (int i = low; i <= high; i++)
            if (in[i] == e)
                return i;
        return -1;
    }
    
    TreeNode *build(vector<int> post, int postStart, int postEnd, vector<int> in, int inStart, int inEnd)
    {
        if (inStart > inEnd)
            return nullptr;

        TreeNode *root = new TreeNode(post[postEnd]);
        int rootIndex = search(in, inStart, inEnd, post[postEnd]);

        int leftTreeSize = rootIndex - inStart;
        int rightTreeSize = inEnd - rootIndex;

        root->left = build(post, postStart, postStart + leftTreeSize - 1, in, inStart, rootIndex - 1);
        root->right = build(post, postEnd - rightTreeSize, postEnd - 1, in, rootIndex + 1, inEnd);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder)
    {
        return build(postorder, 0, postorder.size()-1, inorder, 0, inorder.size()-1);
    }
};
