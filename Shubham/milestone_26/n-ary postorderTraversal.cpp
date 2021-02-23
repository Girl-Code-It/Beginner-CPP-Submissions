class Solution {
public:
    vector<int> postorder(Node* root) {
            
        if(root == nullptr)
            return {};
        
        stack<Node*>s1;
        stack<Node*>s2;
        vector<int>v;
        s1.push(root);
        
        while(s1.empty() == false)
        {
            root = s1.top();
            
            s1.pop();
            s2.push(root);
            
            
            for(int i = 0; i < (root->children).size(); i++)
                s1.push(root->children[i]);
        }
        
        while(s2.empty() == false)
        {
            root = s2.top();
            v.push_back(root->val);
            s2.pop();
        }
        return v;
    }
};
