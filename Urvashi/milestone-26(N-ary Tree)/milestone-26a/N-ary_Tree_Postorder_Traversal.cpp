class Solution
{
public:
    vector<int> postorder(Node *root)
    {
        stack<Node *> s1;
        stack<int> s2;
        vector<int> res;

        if (!root)
            return res;

        s1.push(root);

        while (!s1.empty())
        {
            Node *temp = s1.top();
            s1.pop();
            s2.push(temp->val);
            for (auto i : temp->children)
                if (i)
                    s1.push(i);
        }
        while (!s2.empty())
        {
            res.push_back(s2.top());
            s2.pop();
        }
        return res;
    }
};
