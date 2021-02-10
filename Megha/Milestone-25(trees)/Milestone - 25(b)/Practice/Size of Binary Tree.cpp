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
    node->left = NULL;
    node->right = NULL;
    return node;
}

int SizeOfTree(Node* root){
    if(root == NULL){
        return 0;
    }

    int left = SizeOfTree(root->left);
    int right = SizeOfTree(root->right);

    return left + right + 1;
}

int main() {
    Node* root = newNode(11);

    root->left = newNode(15);
    root->right = newNode(13);
    
    cout<<SizeOfTree(root);
    return 0;
}
