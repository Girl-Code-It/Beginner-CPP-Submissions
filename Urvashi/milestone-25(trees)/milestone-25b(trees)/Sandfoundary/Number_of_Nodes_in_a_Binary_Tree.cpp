class Solution
{
    int countnodes(struct node *root)
    {
        static int count = 0;

        if (root != NULL)
        {
            countnodes(root->left); // count left nodes
            count++;
            countnodes(root->right); // count right nodes
        }

        return count;
    }
};
