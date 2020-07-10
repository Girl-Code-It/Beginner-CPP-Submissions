class Solution
{
public:
    string smallestFromLeaf(TreeNode* root,string str = "")
    {
        if(!root)
            return "|";

        str = string(1,root->val + 'a') + str;

        if(!root->left && !root->right)
            return str;

        return min(smallestFromLeaf(root->left,str),smallestFromLeaf(root->right,str));
    }
};