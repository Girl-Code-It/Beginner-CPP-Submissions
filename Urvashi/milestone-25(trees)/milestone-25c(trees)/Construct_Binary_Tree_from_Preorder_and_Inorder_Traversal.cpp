class Solution
{
public:
    int preIndex = 0;
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        return Tree(preorder, inorder, 0, inorder.size() - 1);
    }

    TreeNode *Tree(vector<int> &preorder, vector<int> &inorder, int iBegin, int iEnd)
    {
        if (iBegin > iEnd)
            return NULL;

        int val = preorder[preIndex++];
        TreeNode *t = new TreeNode(val);

        for (int i = iBegin; i <= iEnd; i++)
        {
            if (inorder[i] == val)
            {
                t->left = Tree(preorder, inorder, iBegin, i - 1);
                t->right = Tree(preorder, inorder, i + 1, iEnd);
                break;
            }
        }
        return t;
    }
};
