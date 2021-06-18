class Solution {
public:
    int maxDepth(Node* root) {
            if(root == nullptr)
            return 0;
        
        queue<Node*>q;
        q.push(root);
        q.push(nullptr);
        vector<vector<int>>r;
        vector<int>t;
        while(q.empty() == false)
        {
            root = q.front();
            if(q.front() != nullptr)
            {
                q.pop();
                t.push_back(root->val);     
                for(int i = 0; i < (root->children).size(); i++)
                    q.push(root->children[i]);
            }
            else
            {
                q.pop();
                r.push_back(t);
                t.clear();
                if(q.empty() == true)   break;
                q.push(nullptr);
            }
        }
        return r.size();
    }
};
