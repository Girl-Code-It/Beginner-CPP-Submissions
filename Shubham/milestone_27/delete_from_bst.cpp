#include <iostream>

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

node* FindMin(node* root)
{
    while(root->left != nullptr)
        root = root->left;
    return root;
}

node *Delete(node *root, int key)
{
    if(root == nullptr) return root;

    else if(key < root->val) root->left = Delete(root->left, key);
    else if(key > root->val) root->right = Delete(root->right, key);

    else //root found
    {
        //case 1: No child
        if(root->left == nullptr and root->right == nullptr)
        {
            delete root;
            root = nullptr;
        }
        //case 2: One child
        else if(root->left == nullptr)
        {
            node* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == nullptr)
        {
            node* temp = root;
            root = root->left;
            delete temp;
        }
        //Case 3: 2 children
        else
        {
            node* temp = FindMin(root->right);
            root->val = temp->val;
            root->right = Delete(root->right, temp->val); 
        }
    }
    return root;
}
void inorderTraversal(node* root)
{
    if(root == nullptr)
        return;

    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}
int main()
{
    node *root = new node(30);
    root->left = new node(20);
    root->left->left = new node(10);
    root->left->right = new node(25);
    root->right = new node(40);
    root->right->left = new node(35);
    root->right->right = new node(45);
    root->right->right->left = new node(42);
    root->right->right->left->right = new node(43);

    inorderTraversal(root);
    cout << endl;

    root = Delete(root, 45);

    inorderTraversal(root);
    cout << endl;

}
