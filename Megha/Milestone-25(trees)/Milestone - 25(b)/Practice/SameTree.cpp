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

bool sameTree(Node* root1, Node* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    if(root1 == NULL || root2 == NULL){
        return false;
    }

    return (root1->data == root2->data) && sameTree(root1->left,root2->left) && sameTree(root1->right,root2->right);
}

int main() {
    Node* root1 = newNode(11);
    Node* root2 = newNode(11);

    root1->left = newNode(15);
    root1->right = newNode(13);

    root2->left = newNode(15);
    root2->right = newNode(13);
    root2->left->right = newNode(13);
    
    if(sameTree(root1,root2)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
