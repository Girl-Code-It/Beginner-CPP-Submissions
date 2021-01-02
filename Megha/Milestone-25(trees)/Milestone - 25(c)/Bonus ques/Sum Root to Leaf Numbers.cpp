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
    int sumNumbers(TreeNode* root) {
        return helper(root,0);
    }
    int helper(TreeNode* root, int num) {
        if(root == NULL){
            return 0;
        }
        
        num = num*10 + root->val;
        
        if(root->left == NULL && root->right == NULL){
            return num;
        }
        
        return helper(root->left,num) + helper(root->right,num); 
    }
    
};
