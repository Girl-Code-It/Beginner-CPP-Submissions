class Solution {
public:
    int max_depth(TreeNode* root)
    {
        if(root == nullptr)
                return 0;

        int left_longest = max_depth(root->left);
        int right_longest = max_depth(root->right);
        
        return max(left_longest, right_longest) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
    
        if(root == nullptr)
                return 0;
        int left_longest = max_depth(root->left);
        int right_longest = max_depth(root->right);
        
        int left_diameter = diameterOfBinaryTree(root->left);
        int right_diameter = diameterOfBinaryTree(root->right);
        

        return max(left_longest + right_longest, max(left_diameter, right_diameter));
    }
};
