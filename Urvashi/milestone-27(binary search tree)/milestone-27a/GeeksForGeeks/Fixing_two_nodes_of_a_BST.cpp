TreeNode *first, second, prev, p;
void solve(TreeNode *root)
{
    if (!root)
        return;

    solve(root->left);

    if (prev)
    {
        if (prev->val > root->val)
        {
            if (!first)
            {
                first = prev;
                p = root;
            }
            else
                second = root;
        }
    }
    prev = root;
    solve(root->right);
}

void recoverTree(TreeNode *root)
{
    if (!root)
        return;
    first = NULL, second = NULL, prev = NULL;

    solve(root);
    if (first)
    {
        if (second)
            swap(first->val, second->val);
        else
            swap(first->val, p->val);
    }
}
