class Solution {
public:
    Node* connect(Node* root) 
    {
        if(!root)
            return NULL;
        queue<Node*>q;
        q.push(root);


        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                Node* temp = q.front();
                q.pop();

                if(temp->left)
                {
                    temp->left->next = temp->right;
                    q.push(temp->left);
                }

                if(temp->right)
                {
                    if(temp->next)
                        temp->right->next = temp->next->left;
                    q.push(temp->right);
                }
            }
        }
        return root;
    }
};