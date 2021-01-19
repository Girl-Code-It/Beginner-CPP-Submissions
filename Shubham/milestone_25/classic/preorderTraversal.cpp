class Solution {
public:
    
    vector<int> preorderTraversal(TreeNode* root) {

        stack<TreeNode*>stk;
        vector<int>A;
        
        if(root == nullptr)
                return {};
        stk.push(root);
        
        while(stk.empty() != true)
        {
            TreeNode* current = stk.top();
            A.push_back(current->val);
            stk.pop();
            
            if(current->right != nullptr)
                stk.push(current->right);
            if(current->left != nullptr)
                stk.push(current->left);
        }
        return A;
    }
};
