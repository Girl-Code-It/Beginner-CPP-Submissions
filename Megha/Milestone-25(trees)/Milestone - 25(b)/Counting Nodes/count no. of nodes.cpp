#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

struct Node* newNode(int data){
    Node* node = new Node();
    node->data = data;
    node->left = node->right = NULL;
    return node;
};

int countNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int left = countNodes(root->left);
    int right = countNodes(root->right);

    return left+right+1;
}

int main() {
    Node* root;
    root = newNode(25);
    root->left = newNode(27);
    root->right = newNode(29);
    root->left->left = newNode(7);
    root->left->right = newNode(91);
    root->right->left = newNode(13);
    root->right->right = newNode(55);
    cout<<countNodes(root);
}
