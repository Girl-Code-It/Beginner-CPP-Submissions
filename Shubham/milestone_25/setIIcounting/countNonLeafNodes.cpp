int countNonLeafNodes(Node* root)
{
        if(root == nullptr)
                return 0;

        int r = 0;
        queue<Node*>q;

        q.push(root);

        while(q.empty() == false)
        {
                root = q.front();
                q.pop();

                if(root->left != nullptr || root->right != nullptr)
                        r++;
                
                if(root->left != nullptr)
                        q.push(root->left);
                
                if(root->right != nullptr)
                        q.push(root->right);
        }
        return r;
}
