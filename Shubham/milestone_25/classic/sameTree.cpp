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

bool sameTree(node* root1, node*root2)
{
        if(root1 ==  nullptr && root2 == nullptr)
                return true;
        if(root1 == nullptr || root2 == nullptr)
                return false;

        return root1->val == root2->val &&
        sameTree(root1->left, root2->left) &&
        sameTree(root1->right, root2->right);
}
int main()
{
        node* root1 = new node(1);
        root1->left = new node(2);
        root1->right = new node(3);
        root1->left->right = new node(4);
        root1->left->left = new node(5);

        node* root2 = new node(1);
        root2->left = new node(2);
        root2->right = new node(3);
        root2->left->right = new node(4);
        root2->left->left = new node(5);

        cout << sameTree(root1, root2) << endl;

        
}
