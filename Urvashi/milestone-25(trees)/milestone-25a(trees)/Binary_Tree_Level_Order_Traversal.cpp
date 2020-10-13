//Breadth first search (BFS) -> level order traversal

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {

        vector<vector<int>> v;

        if (!root)
            return v;

        vector<int> a;

        vector<TreeNode *> b, temp;

        b.push_back(root); // push root node's address

        while (b.size() != 0)
        {
            temp.clear();
            a.clear();

            for (TreeNode *r : b) // vector for loop using stl
            {
                if (r)
                    a.push_back(r->val); // for every node first print its value

                if (r->left)
                    temp.push_back(r->left); //then its left child

                if (r->right)
                    temp.push_back(r->right); //then right child
            }

            if (a.size() != 0)
            {
                v.push_back(a);
            }

            b = temp;
        }
        return v;
    }
};
