#include<iostream>
#include<stack>

using namespace std;

struct node
{
        char val;
        node* left;
        node* right;
        

        node(int e)
        {
                val = e;
                left = nullptr;
                right = nullptr;
        }
};


void postorderTraversal(node* root)
{

        if(root == nullptr)     return;
        stack<node*>s1;
        stack<node*>s2;

        s1.push(root);

        while(s1.empty() == false)
        {
                root = s1.top();
                s1.pop();
                s2.push(root);
                if(root->left != nullptr)
                        s1.push(root->left);
                if(root->right != nullptr)
                        s1.push(root->right);
        }

        //printing stack 2


        while(s2.empty() == false)
        {
                cout << s2.top()->val << "\t";
                s2.pop();
        }
}


int main()
{
        node *root = new node('F');
        root->left = new node('B');
        root->right = new node('G');
        root->left->left = new node('A');
        root->left->right = new node('D');
        root->right->right = new node('I');
        root->left->right->left = new node('C');
        root->left->right->right = new node('E');
        root->right->right->left = new node('H');       

        postorderTraversal(root);

        cout << endl;
}
