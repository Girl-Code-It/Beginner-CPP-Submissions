#include<iostream>

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

node* search(node* root, int key)
{
    while(root != nullptr)
    {
        if(root->val == key)
            return root;
        else if(key < root->val)
            root = root->left;
        else
            root = root->right;
    }
    return nullptr;
}


int main()
{
    node* root = new node(30);
    root->left = new node(15);
    root->right = new node(50);
    root->left->left = new node(10);
    root->left->right = new node(20);
    root->right->left = new node(40);
    root->right->right = new node(60);

    if(search(root, 50))
        printf("found\n");
    else
        printf("not found\n");   
}
