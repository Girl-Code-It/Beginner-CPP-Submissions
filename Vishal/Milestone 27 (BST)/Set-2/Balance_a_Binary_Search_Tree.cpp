class Solution
{
public:
    TreeNode* newNode(int x)
    {
        TreeNode* ptr = new TreeNode;
        ptr->val = x;
        ptr->left = NULL;
        ptr->right = NULL;
        return ptr;
    }
    
    TreeNode* bst(vector<int>& v, int s, int e)
    {
        if(s>e)
            return NULL;

        int rI = s+((e-s)/2);
        TreeNode* root = newNode(v[rI]);
        root->left = bst(v,s,rI-1 );
        root->right = bst(v,rI+1,e);
        return root;
    }

    void inorder(TreeNode* root,vector<int>& v)
    {
        if(!root)
            return ;

        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }

    TreeNode* balanceBST(TreeNode* root)
    {
        vector<int>v;
        inorder(root,v);
        return bst(v,0,v.size()-1);
    }
};