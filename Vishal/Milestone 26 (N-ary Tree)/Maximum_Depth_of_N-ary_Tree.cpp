class Solution
{
public:
    int maxDepth(Node* root)
    {
        if(!root)
            return 0;
            
        queue<Node*>q;
        q.push(root);
        
        int level = 0;
        
        while(!q.empty())
        {
            int sz = q.size();
            level++;
            while(sz--)
            {
                Node* temp = q.front();
                q.pop();

                for(auto n : temp->children)
                    q.push(n);
                
            }
        }
        return level;
    }
};