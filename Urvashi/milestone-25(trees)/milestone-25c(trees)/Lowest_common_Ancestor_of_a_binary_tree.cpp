
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
    if(root == NULL)
        return NULL;
        
    //// if left and right descendants are having value equal to root then root is LCA.
    if(root -> val == p -> val || root -> val == q -> val) 
        return root;
    
    struct TreeNode* l = lowestCommonAncestor(root -> left, p, q);
    struct TreeNode* r = lowestCommonAncestor(root -> right, p, q);
    
    if(l && r)    // if both root->left and root->right have p and q then root is LCA.
        return root;
    else if(l)   // if root -> left has p q. find the res in the left branch
        return l;
    else if(r)   // if root -> right has p q. find the rest in the right branch
        return r;
    else 
        return NULL ;
    }
};
