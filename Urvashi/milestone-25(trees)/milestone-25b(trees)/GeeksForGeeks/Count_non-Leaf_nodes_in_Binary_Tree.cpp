int countNonLeafNodes(Node *root)
{
    // Code here
    if (!root || (!root->left && !root->right))
        return 0;
    return 1 + countNonLeafNodes(root->left) + countNonLeafNodes(root->right);
}
