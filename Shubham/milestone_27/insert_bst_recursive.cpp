#include <iostream>
#include <queue>

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

node *insert(node *root, int key)
{
    if (root == nullptr)
    {
        root = new node(key);
        return root;
    }
    else if(key < root->val)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);

    return root;
}
 

int main()
{
    node* root = nullptr;

    root = insert(root, 5);
    insert(root, 10)
}
