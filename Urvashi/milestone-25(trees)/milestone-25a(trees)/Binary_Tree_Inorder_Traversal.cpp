// depth first search (DFS)->inorder traversal
// left->root->right(order of traversing)

class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> v; // vector to traverse through tree

        stack<TreeNode *> s; //stack to store addresses of tree nodes

        TreeNode *temp = root;

        while (temp || !s.empty()) // if not a leaf node and stack is not empty
        {
            while (temp)
            {
                s.push(temp);      //push the node in stack
                temp = temp->left; // go to the left node until we reach at a leaf node.
            }

            temp = s.top();
            s.pop();
            v.push_back(temp->val); // now print root node
            temp = temp->right;     //then traverse through right subtree
        }
        return v;
    }
};
