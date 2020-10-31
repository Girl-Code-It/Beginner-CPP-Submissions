// depth first search(DFS)-> pre order traversal
// root->left->right (order of traversing)

class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {

        vector<int> v; // vector to traverse through tree

        stack<TreeNode *> s; // stack to store addresses of tree nodes

        if (root == NULL) //if tree is empty then simply return (base condition)
            return {};

        while (1)
        {
            if (root != NULL) //if its not a leaf node
            {
                s.push(root);           //first push the address of root node in stack
                v.push_back(root->val); //push value of root node in vector
                root = root->left;      //then go to its left subtree
            }
            else
            {
                if (s.empty()) //if stack is empty
                    break;
                else
                {
                    root = s.top();
                    s.pop();
                    root = root->right; //traverse through right subtree.
                }
            }
        }
        return v; //return binary tree.
    }
};
