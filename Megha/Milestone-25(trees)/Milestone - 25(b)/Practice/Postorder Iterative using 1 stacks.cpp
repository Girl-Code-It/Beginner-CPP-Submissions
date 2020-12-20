#include <bits/stdc++.h>
using namespace std;

struct Node{
    char data;
    Node* left;
    Node* right;
};

void PostOrderIterative(Node* root){
    Node* current = root;
    stack<Node*> s;

    while(!s.empty() || current!=NULL){
        if(current!=NULL){
            s.push(current);
            current = current->left;
        }
        else{
            Node* temp = s.top()->right;
            if(temp == NULL){
                temp = s.top();
                s.pop();
                cout<<temp->data<<" ";
                while(!s.empty() && temp==s.top()->right){
                temp = s.top();
                s.pop();
                cout<<temp->data<<" ";
                }
            }
            else{
                current = temp;
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
	//Print Nodes in PostOrder. 
    
    PostOrderIterative(root);
}

//output = A C B Z Q M
