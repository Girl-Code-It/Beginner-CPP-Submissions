class Solution
{
public:
    TreeNode* bst(vector<TreeNode*>& v, int s, int e)
    {
        if(s>e)
            return NULL;

        int rI = s+((e-s)/2);
        TreeNode* root = v[rI];
        root->left = bst(v,s,rI-1 );
        root->right = bst(v,rI+1,e);
        return root;
    }

    void inorder(TreeNode* root,vector<TreeNode*>& v)
    {
        if(!root)
            return ;

        inorder(root->left,v);
        v.push_back(root);
        inorder(root->right,v);
    }

    TreeNode* balanceBST(TreeNode* root)
    {
        vector<TreeNode*>v;
        inorder(root,v);
        return bst(v,0,v.size()-1);
    }
};