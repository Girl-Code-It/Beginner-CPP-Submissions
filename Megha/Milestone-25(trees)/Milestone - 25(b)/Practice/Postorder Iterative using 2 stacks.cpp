#include <bits/stdc++.h>
using namespace std;

struct Node{
    char data;
    Node* left;
    Node* right;
};

void PostOrderIterative(Node* root){
    if(root == NULL){
        return;
    }

    stack<Node*> s1;
    stack<Node*> s2;
    s1.push(root);

    while(!s1.empty()){
            root = s1.top();
            s1.pop();
            s2.push(root);
            if(root->left){
                s1.push(root->left);
            }
            if(root->right){
                s1.push(root->right);
            }
    }

    while(!s2.empty()){
        cout<<s2.top()->data<<" ";
        s2.pop();
    }
     
}

Node* Insert(Node* root, char data){
    if(root == NULL){
        root = new Node();
        root->data = data;
        root->left = root->right = NULL;
    }
    else if(data <= root->data){
        root->left = Insert(root->left,data);
    }
    else{
        root->right = Insert(root->right,data);
    }
    return root;
}

int main() {
    /*Code To Test the logic
      Creating an example tree
                M
               / \
              B   Q
             / \   \
            A   C   Z
    */
    Node* root = NULL;
    root = Insert(root,'M'); root = Insert(root,'B');
    root = Insert(root,'Q'); root = Insert(root,'Z');
    root = Insert(root,'A'); root = Insert(root,'C');
    //Print Nodes in PostOrder.
    
    PostOrderIterative(root);
}

//output = A C B Z Q M
