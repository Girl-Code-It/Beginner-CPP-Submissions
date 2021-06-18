class Solution {
public:
    int Height(TreeNode* root)
    {
        if(!root)
            return 0;
        
        return max(Height(root->left), Height(root->right)) + 1;
            
    }
    bool isBalanced(TreeNode* root)
    {
        if(!root)
            return true;
        
        
        int left_height = Height(root->left);
        int right_height = Height(root->right);
        
        if(abs(left_height - right_height) <= 1 and isBalanced(root->left) and isBalanced(root->right))
                return true;
        
        return false;
    }
};
