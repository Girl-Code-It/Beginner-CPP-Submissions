//https://leetcode.com/problems/diameter-of-binary-tree/submissions/

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
    int solve(TreeNode* root, int &result){
        // if tree is empty then it will have no path and sum will be zero
        if(root == NULL){
            return 0;
        }
        
        // finding values from left and right subtree
        int left = solve(root->left,result);
        int right = solve(root->right,result);
        
        int temp = max(left,right) + 1;
        int ans = max(temp, 1+left+right);
        result = max(result, ans);
        
        return temp;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int res = INT_MIN;
        if(root == NULL){
            return 0;
        }
        
        solve(root,res);
        return res-1;
    }
};
