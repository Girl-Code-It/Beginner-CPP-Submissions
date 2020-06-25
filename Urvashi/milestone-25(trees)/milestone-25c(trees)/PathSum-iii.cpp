class Solution {
public:
    int ans;
    
    int pathSum(TreeNode* root, int sum) {
        if(root)
        {
            preorder(root,sum);
            pathSum(root->left,sum);
            pathSum(root->right,sum);
        }
        return ans;
    }
    
    void preorder(TreeNode* root, int sum){
        if(!root)
            return;
        if(root->val==sum)
            ans++;
        preorder(root->left,sum-root->val);
        preorder(root->right,sum-root->val);
    }
};
