//https://leetcode.com/problems/balance-a-binary-search-tree/

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
    //For Inorder traversal
    void Inorder(TreeNode* root,vector<TreeNode*> &v){
        if(root == NULL){
            return;
        }
        Inorder(root->left,v);
        v.push_back(root);
        Inorder(root->right,v);
    }
    
    TreeNode* BST(vector<TreeNode*> &v,int low,int high) {
         if(low > high){
            return NULL;
        }
        
        int mid = low + (high-low)/2;
        TreeNode* root = v[mid];
        
        root->left = BST(v,low,mid-1);
        root->right = BST(v,mid+1,high);
        
        return root;
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        vector<TreeNode*> v;
        Inorder(root,v);
        return BST(v,0,v.size()-1);
    }
};
