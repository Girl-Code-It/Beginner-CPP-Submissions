#include <iostream>
using namespace std;

struct Node{
    char data;
    Node* left;
    Node* right;
};

void Postorder(Node* root){
    if(root == NULL){
        return;
    }
    
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
    
}

// Function to insert Node in a Binary Search Tree
Node* insert(Node* root, char data){
    if(root == NULL){
        root = new Node();
        root->data = data;
        root->left = root->right = NULL;
    }
    else if(data <= root->data){
        root->left = insert(root->left,data);
    }
    else{
        root->right = insert(root->right,data);
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
	root = insert(root,'M'); root = insert(root,'B');
	root = insert(root,'Q'); root = insert(root,'Z'); 
	root = insert(root,'A'); root = insert(root,'C');
	//Print Nodes in Postorder. 
	Postorder(root);
}
