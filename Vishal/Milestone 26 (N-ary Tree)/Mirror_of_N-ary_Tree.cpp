void mirrorTree(Node * root)
{
    if(!root)
        return;

    int n = root->child.size();

    if (n < 2)
        return;

    reverse(root->child.begin(), root->child.end());

    for (int i=0; i<n; i++)
         mirrorTree(root->child[i]);
}