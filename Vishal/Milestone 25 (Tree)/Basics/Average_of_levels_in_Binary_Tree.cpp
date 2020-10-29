class Solution
{
public:
    vector<double> averageOfLevels(TreeNode* root)
    {
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);


        while(! q.empty())
        {
            long sum = 0;
            double avg = 0.0;
            int level_size = q.size();
            
            for(int i=0; i<level_size; i++)
            {
                TreeNode* temp = q.front();
                q.pop();

                sum += temp -> val;

                if(temp -> left)
                    q.push(temp -> left);

                if(temp -> right)
                    q.push(temp -> right);
            
            }
            
            avg = (double)sum/level_size;
            ans.push_back(avg);
        }

        return ans;
    }
};