class Solution
{
public:
  Node *connect(Node *root)
  {
    if (!root)
      return NULL;

    Node *next = NULL;
    Node *rootNext = root->next;

    while (rootNext && !next)
    {
      next = rootNext->left ? rootNext->left : rootNext->right;
      rootNext = rootNext->next;
    }

    if (root->right)
    {
      root->right->next = next;
    }

    if (root->left)
    {
      root->left->next = !root->right ? next : root->right;
    }

    connect(root->right);
    connect(root->left);
    return root;
  }
};
