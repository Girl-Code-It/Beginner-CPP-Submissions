class Solution
{
public:
    Node* connect(Node* root)
    {
        if(!root)
            return NULL;
            
        Node *cur = NULL,*pre = root;
        
        while(pre->left)
        {
            cur = pre;
            
            while(cur)
            {
                cur->left->next = cur->right;
                
                if(cur->next)
                    cur->right->next = cur->next->left;
            
                cur = cur->next;
            }
            pre = pre->left;
        }
        
        return root;    
    }
};