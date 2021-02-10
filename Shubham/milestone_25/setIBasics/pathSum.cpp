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


bool pathSum(node* root, int sum)
{
        if(root == nullptr)
                return false;

        //condition for leaf node check
        if(root->left == nullptr && root->right == nullptr)
        {
                if(sum == root->val)
                        return true;
                else
                        return false;
        }

        //check for left subtree
        if(pathSum(root->left, sum - root->val))
                return true;
        
        if(pathSum(root->right, sum - root->val))
                return true;

        return false;
}

int main()
{
        node* root = new node(10);
        root->left = new node(16);
        root->right = new node(5);
        root->left->right = new node(-3);
        root->right->left = new node(6);
        root->right->right = new node(11);


        cout << pathSum(root, 27) << endl;


}
