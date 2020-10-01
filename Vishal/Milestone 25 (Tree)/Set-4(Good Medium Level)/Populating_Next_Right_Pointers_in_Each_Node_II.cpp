class Solution
{
public:
    Node* connect(Node* root)
    {
        Node *curr = root;
        Node *head = NULL;//Point the first node of next level
        Node *prev = NULL;//Point the Prev Node to point Current

        while(curr)
        {
            //Current Level
            while(curr)
            {
                //Left Child
                if(curr->left)
                {
                    if(prev)
                        prev->next = curr->left;
                    else
                        head = curr->left;

                    prev = curr->left;
                }

                //Right Child
                if(curr->right)
                {
                    if(prev)
                        prev->next = curr->right;
                    else
                        head = curr->right;

                    prev = curr->right;
                }

                //Next element in same level
                curr = curr->next;
            }
            //Next level
            curr = head;
            head = NULL;
            prev = NULL;
        }
        return root;
    }
};