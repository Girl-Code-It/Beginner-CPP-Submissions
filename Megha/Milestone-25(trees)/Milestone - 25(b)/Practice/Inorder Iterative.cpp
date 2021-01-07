#include <bits/stdc++.h>
using namespace std;

struct Node{
    char data;
    Node* left;
    Node* right;
};

void InorderIterative(Node* root){
    if(root == NULL){
        return;
    }
    stack<Node*> s;

    while(1){
        if(root){
            s.push(root);
            root = root->left;
        }
        else{
            if(s.empty()){
                break;
            }
            else{
                root = s.top();
                s.pop();
                cout<<root->data<<" ";
                root = root->right;
            }
        }
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
	//Print Nodes in InOrder. 
    
    InorderIterative(root);
}
