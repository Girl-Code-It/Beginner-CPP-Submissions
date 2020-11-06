unsigned int getfullCount(struct Node *node)
{
    // If tree is empty
    if (!node)
        return 0;
    queue<Node *> q;

    // Do level order traversal starting from root

    int count = 0; // Initialize count of full nodes
    q.push(node);
    while (!q.empty())
    {
        struct Node *temp = q.front();
        q.pop();

        if (temp->left && temp->right)
            count++;

        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
    return count;
}
