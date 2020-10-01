void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

void merge(Node *root1, Node *root2)
{
    if (root1 == NULL)
    {
        inorder(root2);
        return;
    }

    if (root2 == NULL)
    {
        inorder(root1);
        return ;
    }
    Node *current1 = root1,*current2 = root2;
    stack<Node*> s1,s2;
    
    while (current1 || !s1.empty()|| current2|| !s2.empty())
    {

        if (current1 || current2)
        {
            if (current1)
            {
                s1.push(current1);
                current1 = current1->left;
            }
            
            if (current2)
            {
                s2.push(current2);
                current2 = current2->left;
            }
        }
        else
        {
           if (s1.empty())
            {
                while (!s2.empty())
                {
                    current2 = s2.pop();
                    current2->left = NULL;
                    inorder(current2);
                }
                return ;
            }
            if (s2.empty())
            {
                while (!s1.empty())
                {
                    current1 = s1.pop();
                    current1->left = NULL;
                    inorder(current1);
                }
                return ;
            }

            current1 = s1.pop();
            current2 = s2.pop();

           if (current1->data < current2->data)
            {
                cout<< current1->data <<" ";
                current1 = current1->right;
                s2.push(current2);
                current2 = NULL;
            }
            else
            {
                cout<< current2->data <<" ";
                current2 = current2->right;
                s1.push(current1);
                current1 = NULL;
            }
        }
    }
}