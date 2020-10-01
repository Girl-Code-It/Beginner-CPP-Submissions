class Solution
{
public :
    int count(TreeNode* root,int max)
    {
        if(!root)
            return 0;

        int ans = 0;
        if(root->val >= max)
        {
            ans++;
            max = root->val;
        }
        return ans+count(root->left,max)+count(root->right,max);
    }

    int goodNodes(TreeNode* root)
    {
        return count(root,INT_MIN);
    }
};