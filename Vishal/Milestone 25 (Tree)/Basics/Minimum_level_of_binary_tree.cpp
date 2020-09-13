class Solution
{
//The Min Level at which leaf Node occur
public:
    int minDepth(TreeNode* root)
    {
        if(!root)
            return 0;

        queue<TreeNode*>q;
        q.push(root);

        int level = 0;
        while(!q.empty())
        {
            level++;
            int sz = q.size();
            for(int i=0; i<sz; i++)
            {
                TreeNode* temp = q.front();
                q.pop();

                if(!temp -> right && !temp -> left)
                {
                    return level;
                }

                if(temp -> left)
                    q.push(temp -> left);

                if(temp -> right)
                    q.push(temp -> right);

            }
        }
        return level;
    }
};