class Solution {
    public:
    
    int depth(TreeNode* root)
    {
        if(!root)
            return 0;
        return 1 + max(depth(root->left) , depth(root->right));
    }
    
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;       
        
         int ld = depth(root->left);//find the depthe via left child
         int rd = depth(root->right);//find the depthe via right child
         if(abs(ld-rd)>1)            //if diff is more than 1 then not balanced
            return false;
        
        //Now recursively check the balanced for both left and right node
        if(!isBalanced(root->left))
            return false;
        return isBalanced(root->right);            
    }
};
