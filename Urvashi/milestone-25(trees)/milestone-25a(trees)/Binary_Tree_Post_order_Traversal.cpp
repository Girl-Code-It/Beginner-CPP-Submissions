// depth first search (DFS)->post order traversal
// left->right->root(order of traversing)

class Solution
{
public:
    vector<int> postorderTraversal(TreeNode *root)
    {

        vector<int> v; // vector to traverse through tree

        stack<TreeNode *> s; //stack to store addresses of tree nodes

        TreeNode *temp = root;

        while (!s.empty() || temp) // if not a leaf node and stack is not empty
        {
            while (temp)
            {
                s.push(temp);           //push the node in stack
                v.push_back(temp->val); // push the value in vector
                temp = temp->right;     // go to the right subtree
            }

            temp = s.top();
            s.pop();
            temp = temp->left; //then traverse through left subtree
        }

        reverse(v.begin(), v.end()); //reverse

        return v;
    }
};
