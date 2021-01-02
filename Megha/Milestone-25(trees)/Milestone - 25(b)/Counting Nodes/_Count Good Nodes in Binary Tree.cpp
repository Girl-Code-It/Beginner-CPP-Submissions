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
    int goodNodes(TreeNode* root) {
        return count(root,INT_MIN);
    }
    int count(TreeNode* root,int max) {
        if(root == NULL){
            return 0;
        }
        
        int ans = 0;
        if(root->val >= max){
            ans++;
            max = root->val;
        }
        return ans+count(root->left,max)+count(root->right,max);
    }
};
