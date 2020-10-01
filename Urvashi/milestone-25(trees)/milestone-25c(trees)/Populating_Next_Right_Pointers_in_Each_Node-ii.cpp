class Solution {
public:
    Node* connect(Node* root) {
        
        if(!root)
            return root;
        
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()) 
        {
            Node *ptr = q.front();
            q.pop();
            
            if(!ptr && q.empty())
            {
                break;
            }
            else if(!ptr) 
            {
                q.push(NULL);
            }
            else 
            {
                ptr->next = q.front();
                if(ptr->left)
                    q.push(ptr->left);
                if(ptr->right)
                    q.push(ptr->right);
            }
        }
        return root;
    }
};
