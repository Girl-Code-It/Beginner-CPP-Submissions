class Solution
{
public:
        vector<int> inorderTraversal(TreeNode *root)
        {

                stack<TreeNode *> stk;
                vector<int> A;
                if (root == nullptr)
                        return A;
                while (stk.empty() == false || root != nullptr)
                {

                        if (root != nullptr)
                        {
                                stk.push(root);
                                root = root->left;
                        }
                        else
                        {
                                root = stk.top();
                                stk.pop();
                                A.push_back(root->val);
                                root = root->right;
                        }
                }
                return A;
        }
};
