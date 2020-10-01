class Solution
{
public :
    int goodNodes(TreeNode* root)
    {
        if(!root)
            return 0;

        queue<pair<TreeNode*,int> >q;
        int m = INT_MIN,count = 0;

        q.push({root,m});

        while(!q.empty())
        {
            auto temp = q.front();
            q.pop();

            if(temp.first -> val >= temp.second)
                count++;

            m = max(temp.first -> val,temp.second);
            
            if(temp.first -> left)
                q.push({temp.first-> left,m});

            if(temp.first -> right)
                q.push({temp.first -> right,m});

        }
        return count;
    }
};