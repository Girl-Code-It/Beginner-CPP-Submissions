class Solution 
{
public:
    vector<int> preorder(Node* root) 
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
            
            for(int i = (temp->children).size()-1; i>=0;i--)
                st.push(temp->children[i]);
        }
        return res;
    }
};