class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        if(root == nullptr)
            return 0;
        
        int left_depth = maxDepth(root->left);
        int right_depth = maxDepth(root->right);
        
        return (left_depth > right_depth) ? left_depth+1 : right_depth+1;
        
    }
};
