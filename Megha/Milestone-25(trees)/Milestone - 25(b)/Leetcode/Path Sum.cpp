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
    bool hasPathSum(TreeNode* root, int sum) {
      if(root == NULL){
          return false;
      }
    
      if(root->left==NULL && root->right==NULL){
          return (sum - root->val == 0);
      }
     
      if(hasPathSum(root->left,sum - root->val)){
          return true;
      }
      if(hasPathSum(root->right,sum - root->val)){
          return true;
      }
      return false;
    }
};
