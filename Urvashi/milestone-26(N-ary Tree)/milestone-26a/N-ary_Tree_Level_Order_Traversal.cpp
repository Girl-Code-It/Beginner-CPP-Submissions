class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) 
    {
         vector<vector<int>> ans;
         if(!root)
             return ans;
         queue<Node*> q;
         q.push(root);
        
        while (!q.empty())
        {
            int k=q.size();
            vector<int>temp;
            
            for (int j=0;j<k;j++)
            {
                Node* u=q.front();
                q.pop();
                temp.push_back(u->val);
                for (auto v:u->children)
                {
                    if(v)
                        q.push(v);
                }
        }
        ans.push_back(temp);   
    }
    return ans;
    }
};
