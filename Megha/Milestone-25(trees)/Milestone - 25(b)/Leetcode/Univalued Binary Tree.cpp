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
    bool isUnivalTree(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        
        stack<TreeNode*> s;
        s.push(root);
        int value = root->val;
        
        while(!s.empty()){
            TreeNode* current = s.top();
            s.pop();
            if(current-> val != value){
                return false;
            }
            if(current->left){
                s.push(current->left);
            }
            if(current->right){
                s.push(current->right);
            }
        }
        
        return true;
    }
};
