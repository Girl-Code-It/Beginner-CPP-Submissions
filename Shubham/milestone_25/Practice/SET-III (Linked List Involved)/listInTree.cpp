class Solution {
public:
    
    bool check(ListNode* head, TreeNode* root)
    {
        if(root == nullptr and head == nullptr)
            return true;
        if(root == nullptr)
            return false;
        if(head == nullptr)
            return true;
        
        bool curr = root->val == head->val;
        bool left = check(head->next, root->left);
        bool right = check(head->next, root->right);
        
        return curr and (left or right);
    }
    
    bool isSubPath(ListNode* head, TreeNode* root) {
        
        if(root == nullptr)
            return false;
        
        bool roott = check(head, root);
        bool left = isSubPath(head, root->left);
        bool right = isSubPath(head, root->right);

        return roott or left or right;
        
        
    }
};
