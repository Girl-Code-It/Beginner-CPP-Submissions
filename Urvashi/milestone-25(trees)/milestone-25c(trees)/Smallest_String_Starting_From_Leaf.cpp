class Solution {
public:
    string ans = "~";
    void lexi(TreeNode* root,string s)
    {
            if (!root) 
                return;
            if (!root->left && !root->right)
                ans = min(ans,char( root->val +'a') + s);
                
            lexi(root->left,char(root->val+'a') + s);
            lexi(root->right,char(root->val+'a') + s);
    }
    
    string smallestFromLeaf(TreeNode* root) 
    {
        lexi(root,"");
        return ans;
    }

};
