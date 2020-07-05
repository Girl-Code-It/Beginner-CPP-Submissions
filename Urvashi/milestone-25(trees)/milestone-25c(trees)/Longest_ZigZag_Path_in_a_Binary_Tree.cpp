class Solution {
public:
    int max ;
    void dfs (TreeNode* root , int isleft , int d)
    {
        if(!root)
            return ;
        max = (max < d)? d : max ;
        
        if(isleft)
        {
            dfs (root->left , false , d + 1);
            dfs (root->right , true , 1);
        }
        else
        {
            dfs (root->left , false , 1);
            dfs (root->right , true , d + 1);
        }
    }
    
    int longestZigZag(TreeNode* root) {
        max = 0;
        dfs (root , false , 0);
        dfs (root , true , 0);
        return max;
    }
};
