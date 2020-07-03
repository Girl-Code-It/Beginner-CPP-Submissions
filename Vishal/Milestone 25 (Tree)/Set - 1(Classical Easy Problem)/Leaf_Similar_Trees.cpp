class Solution
{
public:
    queue<int> q1;
    queue<int> q2;

    void inorder(TreeNode* root,queue<int> &q)
    {
        if(root==NULL)
            return;

        inorder(root->left,q);
        
        if(root->left==NULL && root->right==NULL)
            q.push(root->val);
            
        inorder(root->right,q);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2)
    {
        inorder(root1,q1);
        inorder(root2,q2);

        if(q1==q2)
            return true;
        else
            return false;
    }
};