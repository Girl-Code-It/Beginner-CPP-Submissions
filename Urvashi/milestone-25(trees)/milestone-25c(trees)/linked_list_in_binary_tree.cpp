class Solution
{
public:
    bool dfs(ListNode *head, TreeNode *root)
    {
        if (!head) // for empty linked list.
            return true;
        if (!root) // for empty tree.
            return false;
        // if root node is equal to some node in linked list 
        // then check if linked list is present in left or right subtree.
        if (root->val == head->val) 
            return dfs(head->next, root->left) || dfs(head->next, root->right); 
        else
            return false;
    }

    bool isSubPath(ListNode *head, TreeNode *root)
    {
        if (!root)
            return false;
        if (!head)
            return true;
        return dfs(head, root) || isSubPath(head, root->left) || isSubPath(head, root->right);
    }
};
