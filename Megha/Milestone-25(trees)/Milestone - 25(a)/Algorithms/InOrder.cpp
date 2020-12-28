#include <iostream>
using namespace std;

struct Node{
    char data;
    Node* left;
    Node* right;
};

void InOrder(Node* root){
    if(root == NULL){
        return;
    }
    
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

// Function to Insert Node in a Binary Search Tree
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
	InOrder(root);
}
