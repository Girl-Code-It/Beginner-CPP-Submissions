class Solution 
{
public:
    vector<int> postorder(Node* root) 
    {
        if(!root)
            return {};
            
        vector<int>res;
        stack<Node*>st;
        st.push(root);
        
        while(!st.empty())
        {
            Node* temp = st.top();
            st.pop();
            res.push_back(temp->val);
            
            for(auto n : temp->children)
                st.push(n);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};