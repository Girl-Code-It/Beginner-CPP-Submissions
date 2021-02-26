#include<iostream>
#include<queue>

using namespace std;

struct node
{
        int val;
        node* left;
        node* right;

node(int e)
    {
            val = e;
            left = right = nullptr;
    }
};

bool isSameTree(node* root1, node* root2)
{
        if(root1 == nullptr && root2 == nullptr)
                return true;
        
        if(root1 == nullptr || root2 == nullptr)
                return false;

        return (root1->val == root2->val) &&
                isSameTree(root1->left, root2->left) &&
                isSameTree(root1->right, root2->right);
}

bool isSubTree(node* root, node* s)
{
        queue<node*>q;

        q.push(root);
        int temp = s->val;
        while(q.empty() == false)
        {
                root = q.front();

                if(root->val == temp && isSameTree(root, s))
                        return true;
                
                q.pop();
                if(root->left != nullptr)
                        q.push(root->left);
                if(root->right != nullptr)
                        q.push(root->right);
                

        }
        return false;
}

int main()
{
        node* root = new node(3);
        root->left = new node(4);
        root->right = new node(5);
        root->left->left = new node(1);
        root->left->right = new node(2);

        node* s = new node(4);
        s->left = new node(1);
        s->right = new node(2);

        cout << isSubTree(root, s) << endl;
}
