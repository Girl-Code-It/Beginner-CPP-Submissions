#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int data){
    Node* ptr = new Node();
    ptr->data = data;
    ptr->left = ptr->right = NULL;
    return ptr;
}

Node* bst(int a[],int low,int high){
    if(low>high){
        return NULL;
    }

    int mid = low+(high-low)/2;
    Node* root = newNode(a[mid]);
    root->left = bst(a,low,mid-1);
    root->right = bst(a,mid+1,high);
    return root;
}

void preorder(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
     preorder(root->right);
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Node* root = bst(a,0,n-1);
        preorder(root);
    }
}
