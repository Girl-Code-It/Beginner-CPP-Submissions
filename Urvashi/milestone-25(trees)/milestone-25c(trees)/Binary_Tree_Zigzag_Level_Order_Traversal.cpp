class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<int>v;
        queue<TreeNode*>q;
        vector<vector<int>>res;
        
        if(!root)
            return res;
        
        q.push(root);
        int x = 0;
        int count = q.size();
        
        while(!q.empty())
        {
        if(q.front()->left)
            q.push(q.front()->left);
        if(q.front()->right)
            q.push(q.front()->right);
        
        v.push_back(q.front()->val);
        q.pop();
       
        if(--count==0)
        {
            if(x%2 == 0)
                res.push_back(v);
            else
            {
                reverse(v.begin() , v.end());
                res.push_back(v);
            }
            x++;
            count = q.size();
            v.clear();
        }
    }
        return res;
    }
};
