#include <bits/stdc++.h>
using namespace std;

//to create structure of binary IsBinarySearchTree tree
struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* root;

//to create a note
Node* GetNewNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

//To insert a node
Node* Insert(Node* root,int data){
    if(root == NULL){
        root = GetNewNode(data);
        return root;
    }
    else if(data <= root->data){
        root->left = Insert(root->left,data);
    }
    else{
        root->right = Insert(root->right,data);
    }
    return root;
}

bool isBst(Node* root,int minValue,int maxValue){
    if(root == NULL){
        return true;
    }
    if(root->data < maxValue && root->data > minValue && isBst(root->left,minValue,root->data) && isBst(root->right,root->data,maxValue)){
        return true;
    }
    else
    return false;
}


//to IsBinarySearchTree if the number is present or not in binary tree
bool IsBinarySearchTree(Node* root){
    return isBst(root,INT_MIN,INT_MAX);
}

int main() {
    root = NULL;
    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,25);
    root = Insert(root,8);
    root = Insert(root,12);
    int number;
    cin>>number;
    cout<<"Enter no. to be IsBinarySearchTreeed "<<number<<endl;
    if(IsBinarySearchTree(root) == true){
        cout<<"is bst"<<endl;
    }
    else{
      cout<<" Not is bst"<<endl;
    }
    return 0;
}
