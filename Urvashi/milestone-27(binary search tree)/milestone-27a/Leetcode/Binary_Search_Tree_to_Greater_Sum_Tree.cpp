class Solution {
public:
   
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        if(!root) return NULL;
        
        bstToGst(root->right) ;
        int temp = root->val;
        sum += temp ;
        root->val = sum ;
        bstToGst(root->left) ;
        return root ;
    }
};
