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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        if(root == NULL){
            return {};
        }
        
        int left = Height(root->left);
        int right = Height(root->right);
        
        if(left == right){
            return root;
        }
        else if(left>right){
            return subtreeWithAllDeepest(root->left);
        }
        else{
            return subtreeWithAllDeepest(root->right);
        }
    }
    
    int Height(TreeNode* root){
        if(root == NULL){
            return {};
        }
        
        int left = Height(root->left);
        int right = Height(root->right);
        
        return 1 + max(left,right);
    }
};
