class Solution
{
public:
    void flatten(TreeNode* root)
    {
        if(!root)
            return;

        TreeNode *curr = root;
        TreeNode *last = NULL;

        while(curr)
        {
            if(curr->left)
            {
                last = curr->left;

                while(last->right)
                    last = last->right;

                last->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            curr = curr->right;
        }
    }
};