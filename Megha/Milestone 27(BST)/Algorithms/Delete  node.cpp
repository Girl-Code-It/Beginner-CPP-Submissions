#include <iostream>
using namespace std;

//to create structure of binary search tree
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

//to search if the number is present or not in binary tree
Node* Search(Node* root,int data){
    if(root == NULL){
        return NULL;
    }
    else if(root->data == data){
        return root;
    }
    else if(data <= root->data){
        return Search(root->left,data);
    }
    else
    return Search(root->right,data);
}

//To find the minimum element
Node* FindMin(Node* root){
    if(root == NULL){
        return NULL;
    }
    while(root->left){
        root = root->left;
    }
    return root;
}

//to delete a node
Node* Delete(Node* root,int data){
    if(root == NULL){
        return root;
    }
    else if(data < root->data){
       root->left = Delete(root->left,data);
    }
    else if(data > root->data){
        root->right = Delete(root->right,data);
    }
    else{
        //Case1 : NO child
        if(root->left == NULL && root->right == NULL){
            delete root;
            root = NULL;
        }
        //Case2 : One child
        else if(root->left == NULL){
            Node* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL){
            Node* temp = root;
            root = root->left;
            delete temp;
        }
        //Case3 : Two child
        else{
            Node* temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right,temp->data);
        }
    }
    return root;
}

//Inorder Traversal
void Inorder(Node* root){
    if(root == NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

int main() {
    /*Code To Test the logic
	  Creating an example tree
	                    5
			   / \
			  3   10
			 / \   \
			1   4   11
    */
	Node* root = NULL;
	root = Insert(root,5); root = Insert(root,10);
	root = Insert(root,3); root = Insert(root,4); 
	root = Insert(root,1); root = Insert(root,11);

    //before deleting
    cout<<"Inorder before deleting: ";
    Inorder(root);
    cout<<endl;

	// Deleting node with value 5, change this value to test other cases
	root = Delete(root,5);

    cout<<"Inorder after deleting: ";
    Inorder(root);
    cout<<endl;
}
