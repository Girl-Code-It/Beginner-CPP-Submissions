class Solution
{
public:
    bool isUnivalTree(TreeNode* root)
    {
        //empty tree
        if(! root)
            return true;

        int var = root -> val;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();
             
            //if it is not univalued
            if(var != temp -> val)
                return false;

            if(temp -> left)
                q.push(temp -> left);

            if(temp -> right)
                q.push(temp ->right);
        }

        return true;
    }
};