
class Solution
{
public:
    void flatten(TreeNode *root)
    {
        if (!root || !root->left && !root->right) // if empty or leaf node then return
            return;

        if (root->left) // if left subtree is present
        {
            flatten(root->left);

            TreeNode *temp = root->right; // store right subtree nodes in temp
            root->right = root->left;     // make left->right
            root->left = NULL;            // make left node null

            TreeNode *temp1 = root->right;

            while (temp1->right)
                temp1 = temp1->right;

            temp1->right = temp;
        }

        flatten(root->right);
    }
};
