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
    bool isSubtree(TreeNode* s, TreeNode* t) {
      if(t == NULL){
          return true;
      }
      if(s == NULL){
          return false;
      }
      if(isIdentical(s,t)){
          return true;
      }
        return isSubtree(s->left,t) || isSubtree(s->right,t);
    }
    bool isIdentical(TreeNode* s, TreeNode* t){
        if(s==NULL && t==NULL){
            return true;
        }
        if(s==NULL || t==NULL){
            return false;
        }
        
        return (s->val==t->val) && isIdentical(s->left,t->left) && isIdentical(s->right,t->right);
    }
};
