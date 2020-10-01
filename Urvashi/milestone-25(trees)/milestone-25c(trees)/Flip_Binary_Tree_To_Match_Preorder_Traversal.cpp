class Solution {
public:
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& voyage) 
    {
        vector<int> ans;
        stack<TreeNode*> s;
        
        s.push(root);
        
        int i=0;
        
        while(!s.empty())
        {
            TreeNode* root=s.top();
            s.pop();
            if(!root)  
                continue;
            
            if(root->val!=voyage[i++]) 
                return {-1};
            
            // if left child exist and right child exist and left child value not equal to voyage
            // then swap
            if(root->left && root->left->val!=voyage[i] && root->right && root->right->val==voyage[i])
            {
                ans.push_back(root->val);
                
                // since stack follows lifo we push left and then right
                s.push(root->left);
                s.push(root->right);
               
            }
            else
            {
                s.push(root->right);
                s.push(root->left);
            }
           
        }
        return ans;
    }
};
