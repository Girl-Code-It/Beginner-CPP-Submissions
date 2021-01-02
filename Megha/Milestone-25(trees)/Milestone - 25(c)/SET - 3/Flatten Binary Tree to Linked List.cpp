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
    void flatten(TreeNode* root) {
        if(root == NULL || root->left==NULL && root->right==NULL){
            return;
        }
        
        if(root->left){
            flatten(root->left);
            TreeNode* temp = root->right;
            root->right = root->left;
            root->left = NULL;
            TreeNode* current = root->right;
            while(current->right){
                current = current->right;
            }
            current->right = temp;
        }
        
    }
};
