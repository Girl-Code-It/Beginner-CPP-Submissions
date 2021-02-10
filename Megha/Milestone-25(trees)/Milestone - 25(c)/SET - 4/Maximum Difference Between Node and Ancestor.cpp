/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxAncestorDiff(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        
        int maxi = INT_MIN, mini = INT_MAX, diff = INT_MIN;

        helper(root, maxi , mini, &diff);
        
        return diff;
    }
    
    void helper(TreeNode* root, int maxi ,int mini, int *diff) {
        if(root == NULL){
            return;
        }
        
         maxi = max(maxi,root->val);
         mini = min(mini,root->val);
         *diff = max(*diff,maxi-mini);
        
         helper(root->left, maxi , mini, diff);
         helper(root->right, maxi , mini, diff);
      
    }
};
