class Solution
{
public :
    vector< vector<int> > levelOrder(TreeNode* root)
    {
        vector< vector<int> > result;

        //If empty tree
        if(!root)
            return result;

        //Store the address of TreeNode
        queue<TreeNode*>q;
        q.push(root);

        vector<int>level;

        //For Traversing
        TreeNode* curt;

        while(!q.empty())
        {
            int s = q.size();

            for(int i=0; i< s; i++)
            {
                curt = q.front();
                q.pop();
                level.push_back(curt -> val);

                if(curt -> left)
                {
                    q.push(curt -> left);
                }

                if(curt -> right)
                {
                    q.push(curt -> right);
                }
            }

            result.push_back(level);
            level.clear();
        }
        return result;
    }
};