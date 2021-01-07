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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder,0,inorder,0,inorder.size()-1);
    }
    
    TreeNode* build(vector<int>& preorder,int prestart, vector<int>& inorder,int instart , int inend) {
        if(prestart > preorder.size() || instart > inend){
            return NULL;
        }
        
        TreeNode* root = new TreeNode(preorder[prestart]);
        int index;
        for(int i=0;i<inorder.size();i++){
            if(inorder[i] == preorder[prestart]){
                index = i;
            }
        }
        
        root->left = build(preorder,prestart+1,inorder,instart,index-1);
        root->right = build(preorder,prestart+index-instart+1,inorder,index+1,inend);
        
        return root;
    }
};
