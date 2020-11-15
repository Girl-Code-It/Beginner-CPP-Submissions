bool isPairPresent(struct Node *root, int target)
{
    queue<Node *> q;
    vector<int> v;
    if (!root)
        return false;

    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        v.push_back(temp->data);
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] + v[j] == target)
                return true;
        }
    }
    return false;
}
