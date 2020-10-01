class Solution
{
public:
    int countLength(TreeNode* root,bool left,int depth)
    {
        if(!root)
            return depth;


        return max(countLength(left ? root->left : root->right,!left,depth+1),countLength(left ? root->left : root->right,left,0));
    }

    int longestZigZag(TreeNode* root)
    {
        if(!root)
            return 0;

        return max(countLength(root,true,0),countLength(root,false,0));
    }
};