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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return build(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1);
    }
    TreeNode* build(vector<int>& inorder, int instart ,int inend, vector<int>& postorder ,int pstart,int pend) {
        if(pstart>pend || instart>inend){
            return NULL;
        }
            
        TreeNode* root = new TreeNode(postorder[pend]);
        int index;
        for(int i=0;i<inorder.size();i++){
            if(inorder[i] == postorder[pend]){
                index = i;
            }
        }
        
        root->left = build(inorder,instart,index-1,postorder,pstart,pstart+index-instart-1);
        root->right = build(inorder,index+1,inend,postorder,pend+index-inend,pend-1);
            
        return root;
    }
};
