class Solution {
public:
    int ans = INT_MIN ;
    void get(TreeNode* root , int max , int min )
    {   
        if(!root)
            return;
        max = (root->val > max) ? root->val : max ;
        min = (root->val < min) ? root->val : min ;
        ans = (ans < abs(max - min)) ? abs (max - min) : ans ;
        
        get(root->left , max , min );
        get(root->right , max , min );
    }
    
    int maxAncestorDiff(TreeNode* root) {
       
        if(!root)
            return 0;
        get(root , root->val , root->val );
        return ans ;
    }
};
