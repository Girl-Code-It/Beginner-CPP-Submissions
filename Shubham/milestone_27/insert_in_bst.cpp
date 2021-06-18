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
void levelorderTraversal(node* root)
{
        if(root == nullptr)    return;

        queue<node*>q;

        q.push(root);

        while(q.empty() == false)
        {
                root = q.front();
                cout << root->val << "\t";
                q.pop();


                if(root->left != nullptr)
                        q.push(root->left);
                
                if(root->right != nullptr)
                        q.push(root->right);
        }
        cout << endl;
}

void insert_in_bst(node* root, int value)
{
    node* tail = nullptr;

    while(root != nullptr)
    {
        if(root->val == value)
            return;
        else if(value < root->val)
        {
            tail = root;
            root = root->left;
        }
        else 
        {
            tail = root;
            root = root->right;
        }
    }
    if(value < tail->val)   tail->left = new node(value);
    else    tail->right = new node(value);
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

    levelorderTraversal(root);

    insert_in_bst(root, 35);

    levelorderTraversal(root);
}


