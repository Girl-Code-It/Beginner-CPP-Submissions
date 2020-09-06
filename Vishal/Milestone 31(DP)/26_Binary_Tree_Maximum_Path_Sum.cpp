// https://leetcode.com/problems/binary-tree-maximum-path-sum/
class Solution 
{
public:
     int solve(TreeNode* root, int &res)
     {
        if(!root)
            return 0;
        
        int left = solve(root -> left, res);
        int right = solve(root -> right, res);
 
        int temp = max(max(left,right) + root->val, root->val);
        int ans = max(temp, left + right + root->val);
        res = max(ans, res);

        return temp;
     }
    
    int maxPathSum(TreeNode* root) 
    {
        if(!root)
            return 0;
        
        int res = INT_MIN;
        solve(root, res);
        return res;
    }
};