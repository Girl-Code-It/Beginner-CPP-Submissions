unsigned int getfullCount(struct Node *root)
{
   if (!root)
      return 0;

   int res = 0;
   if ((!root->left && root->right) || (root->left && !root->right))
      res++;

   res += (getfullCount(root->left) +
           getfullCount(root->right));
   return res;
}
