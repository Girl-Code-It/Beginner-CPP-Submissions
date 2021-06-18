#include <iostream>
#include<queue>

using namespace std;

struct node
{
        int val;
        node *left;
        node *right;

        node(int e)
        {
                val = e;
                left = right = nullptr;
        }
};

int countFullNodes(node* root)
{
        if(root == nullptr)
                return 0;

        int r = 0;
        queue<node*>q;

        q.push(root);

        while(q.empty() == false)
        {
                root = q.front();
                q.pop();

                if((root->left == nullptr && root->right != nullptr) || (root->left != nullptr && root->right == nullptr))
                        r++;
                
                if(root->left != nullptr)
                        q.push(root->left);
                
                if(root->right != nullptr)
                        q.push(root->right);
        }
        return r;
}

int main()
{
        node* root = new node(3);
        root->left = new node(4);
        root->right = new node(5);
        root->left->left = new node(1);
        root->left->right = new node(2);
        root->right->left = new node(4);

        cout << countFullNodes(root) << endl;
}

