// Encodes a tree to a single string.
class Codec
{
public:
    string serialize(TreeNode *root)
    {
        if (!root)
            return "*";
        string s = to_string(root->val);
        string left = "," + serialize(root->left);
        string right = "," + serialize(root->right);

        return s + left + right;
    }

    TreeNode *dfs(string data, int &i)
    {
        if (i >= data.size())
            return NULL;
        if (data[i] == '*')
        {
            i += 2;
            return NULL;
        }

        string s = "";
        while (i < data.size() && data[i] != ',')
        {
            s += data[i];
            i++;
        }
        i++;

        if (s == "")
            return NULL;
        int t = stoi(s);

        TreeNode *root = new TreeNode(t);
        root->left = dfs(data, i);
        root->right = dfs(data, i);
        return root;
    }
    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data)
    {
        int i = 0;
        return dfs(data, i);
    }
};
