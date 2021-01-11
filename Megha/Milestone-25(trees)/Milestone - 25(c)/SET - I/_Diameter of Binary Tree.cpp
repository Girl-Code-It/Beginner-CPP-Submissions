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
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0;
        } 
        
        int lheight = height(root->left);
        int rheight = height(root->right);
        int ldiameter = diameterOfBinaryTree(root->left);
        int rdiameter = diameterOfBinaryTree(root->right);
        cout<<lheight<<" "<<rheight<<" "<<ldiameter<<" "<<rdiameter<<endl;
        
        return max(lheight + rheight , max(ldiameter,rdiameter));
    }
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        
        return max(height(root->left),height(root->right)) + 1;
    }
};
