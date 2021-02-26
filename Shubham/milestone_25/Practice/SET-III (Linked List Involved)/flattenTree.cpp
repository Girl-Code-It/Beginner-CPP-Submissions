class Solution {
public:
    void flatten(TreeNode* root) 
    {
        
        if(root == nullptr or (root->left == nullptr and root->right == nullptr))
                return;
        //.................................//
            TreeNode* tempNode = root->right;
            root->right = root->left;
            root->left = nullptr;
            
            TreeNode* curr = root;
            
            while(curr->right != nullptr)
                curr = curr->right;
            
            curr->right = tempNode;
        
        flatten(root->left);
        flatten(root->right);
    }
};
