class Solution
{
public:

    TreeNode* invertTree(TreeNode* root)
    {
        if(!root)
            return NULL;

        queue<TreeNode*>q;

        q.push(root);

        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();

            TreeNode* temp1 = temp -> right;
            temp -> right = temp -> left;
            temp -> left = temp1;

            if(temp -> left)
                q.push(temp -> left);

            if(temp -> right)
                q.push(temp -> right);
        }

        return root;
    }
};