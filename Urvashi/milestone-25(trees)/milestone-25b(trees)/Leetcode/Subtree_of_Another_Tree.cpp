
class Solution
{
public:
    bool isSubtree(TreeNode *s, TreeNode *t)
    {
        if (t == NULL) // if second tree is empty
            return true;
        if (s == NULL) // if first is empty
            return false;

        if (compare(s, t))
            return true;

        return isSubtree(s->left, t) || isSubtree(s->right, t); // if any of the one subtree of s is equal to t.
    }

    bool compare(TreeNode *root1, TreeNode *root2)
    {
        if (root1 == NULL && root2 == NULL) // if both are empty
            return true;

        if (root1 == NULL || root2 == NULL) // anyone is empty
            return false;

        return (root1->val == root2->val &&
                compare(root1->left, root2->left) &&
                compare(root1->right, root2->right));
    }
};
