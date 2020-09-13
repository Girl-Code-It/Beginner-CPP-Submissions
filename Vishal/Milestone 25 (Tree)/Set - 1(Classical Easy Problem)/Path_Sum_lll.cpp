class Solution
{
public:
    int mycount(TreeNode* root,int sum)
    {
        int count = 0;
        if(!root)
            return 0;
            
        if(root->val == sum)
            count++;

        count += mycount(root->left,sum-root->val);
        count += mycount(root->right,sum-root->val);

        return count;
    }

    int pathSum(TreeNode* root, int sum)
    {
        if(!root)
            return 0;
            
        return mycount(root,sum)+pathSum(root->left,sum)+pathSum(root->right,sum);
    }
};