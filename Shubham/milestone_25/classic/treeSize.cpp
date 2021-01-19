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

int treeSize(node* root)
{
        if(root == nullptr)
                return 0;
        int left_size = treeSize(root->left);
        int right_size = treeSize(root->right);

        return left_size + right_size + 1;
}

int main()
{
        node* root = new node(1);
        root->left = new node(2);
        root->right = new node(3);
        root->left->left = new node(5);
        root ->left->right = new node(4);
        root->right->left = new node(8);

        cout << treeSize(root) << endl;
}
