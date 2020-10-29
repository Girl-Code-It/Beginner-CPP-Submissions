class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root)
    {
        vector<vector<int> >ans;
        if(!root)
            return ans;

        int level = 0;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty())
        {
            int sz = q.size();
            vector<int>v(sz);

            for(int j=0; j<sz; j++)
            {
                TreeNode* node = q.front();
                q.pop();

                if(node->left)
                    q.push(node->left);


                if(node->right)
                    q.push(node->right);

                if(level == 0)
                {
                    v[j] = node->val;
                }
                else
                {
                    v[sz-j-1] = node->val;
                }
            }

            level = !level;
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
};