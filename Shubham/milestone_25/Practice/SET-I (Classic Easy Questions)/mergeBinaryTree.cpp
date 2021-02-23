class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
      
        if(t1 == nullptr and t2 == nullptr)
                return nullptr;

        if(t1 == nullptr)
                return t2;

        if(t2 == nullptr)
                return t1;

        TreeNode* newNode = new TreeNode(t1->val + t2->val);
        newNode->left = mergeTrees(t1->left, t2->left);
        newNode->right = mergeTrees(t1->right, t2->right);

        return newNode;
    }
};
