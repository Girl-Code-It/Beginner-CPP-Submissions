/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL){
            return NULL;
        }
            
        // if root is equuql to p or q return root else return null
        if(root == p || root == q){ 
             return root;
        }
        
        //it wil call recursively at left and will return if there is any p and q else will return null
        TreeNode* left = lowestCommonAncestor(root->left, p, q); 

         //it wil call recursively at right and will return if there is any p and q else will return null
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
             
        //if both left and right are passing the value then we will return the root
        if(left!=NULL && right!=NULL){
            return root;
        }

        //else we will check if left is not null then we wil return left else we will return right
        return (left!=NULL)?left:right;
    }
};
