class Solution 
{
public:
    vector<vector<int>> levelOrder(Node* root) 
    {
        vector<vector<int> > res;
        if(!root)
            return res;
            
        vector<int>level;
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int sz = q.size();
            
            while(sz--)
            {
                Node* temp = q.front();
                q.pop();
                level.push_back(temp->val);
            
                int i = 0,ch = (temp->children).size();
                
                while(ch--)
                {
                    q.push(temp->children[i++]);
                }
            }
            res.push_back(level);
            level.clear();
        }
        return res;
    }
};