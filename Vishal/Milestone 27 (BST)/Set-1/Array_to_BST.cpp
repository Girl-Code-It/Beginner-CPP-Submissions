#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* right;
    Node* left;
};

Node* newNode(int x)
{
    Node* ptr = new Node;
    ptr->data = x;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

Node* bst(int a[], int s, int e)
{
    if(s>e)
        return NULL;
        
    int rI = s+((e-s)/2);
    Node* root = newNode(a[rI]);
    root->left = bst(a,s,rI-1 );
    root->right = bst(a,rI+1,e);
    return root;
}

void preOrder(Node* root)
{
    if(!root)
        return ;
        
    cout << root->data << ' ';
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        int a[n];
        for(int i =0; i<n; i++)
            cin >>a[i];

        Node* root = bst(a,0,n-1);
        preOrder(root);
        cout <<"\n";
    }
}