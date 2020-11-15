
class Solution
{
public:
    bool isUnivalTree(TreeNode *root)
    {

        bool isUnivalue = false;

        if (!root)
            return true;

        // Initial setup
        int rootVal = root->val;

        queue<TreeNode *> q;

        q.push(root);

        // Traverse tree (BFS)
        while (!q.empty())
        {

            TreeNode *currentNode = q.pop();

            // UniVal condition check
            if (currentNode->val != rootVal)
            {
                return false;
            }

            if (currentNode->left != null)
            {
                q.push(currentNode->left);
            }
            if (currentNode->right != null)
            {
                q.push(currentNode->right);
            }
        }

        return true;
    }
};
