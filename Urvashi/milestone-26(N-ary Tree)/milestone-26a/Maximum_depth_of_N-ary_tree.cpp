class Solution
{
public:
    int maxDepth(Node *root)
    {
        if (!root)
            return 0;
        vector<Node *> v = root->children;
        int maxD = 0;
        for (auto i : v)
            maxD = max(maxD, maxDepth(i));
        return maxD + 1;
    }
};
