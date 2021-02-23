class Solution {
public:
    
    vector<int> preorder(Node* root) {
        
        if(root == nullptr)
            return {};
        
        stack<Node*> stk;
        vector<int> v;
        stk.push(root);
        
        while(stk.empty() == false)
        {
            root = stk.top();
            stk.pop();
            v.push_back(root->val);
            
            for(int i = (root->children).size() - 1; i >= 0; i--)
                stk.push(root->children[i]);
        }
        return v;
    }
};
