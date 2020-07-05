class Solution {
public:
    
    bool dfs(ListNode* head, TreeNode* root)
    {
        if(!head) // for empty linked list.
            return true;
        if(!root) // for empty tree.
            return false;
        if(root->val == head->val ) // if root node is equal to some node in linked list 
            
            return dfs(head->next, root->left) || dfs(head->next, root->right) ; // then check if linked list is present in left or right subtree.
        else
            return false;
        
    }
    
    bool isSubPath(ListNode* head, TreeNode* root) 
    {
        if(!root)
            return false;
        if(!head)
            return true;
        return dfs(head, root) || isSubPath(head, root->left) || isSubPath(head, root->right);
    }
};
