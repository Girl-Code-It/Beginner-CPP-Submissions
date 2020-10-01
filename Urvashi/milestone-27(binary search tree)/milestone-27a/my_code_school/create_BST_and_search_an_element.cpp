#include<iostream>
using namespace std;

struct Node {

	int data ;
	Node* left ;
	Node* right ;
};

Node* GetData(int data)
{
	Node* newNode = new Node() ;
	newNode->data = data ;
	newNode->left = newNode->right = NULL ;
	return newNode ;
}
	
Node* Insert(Node* root , int data)
{
	if(!root)
	    return GetData(data) ;
	
	else if(data <= root->data)
	    return Insert(root->left , data) ;
	
	else
	    return Insert(root->right , data) ;

	return root ;
}

bool Search(Node* root , int data)
{
	if(!root)
	    return false ;
	else if(data == root->data)
	    return true ;
	else if(data <= root->data)
	    return Search(root->left , data) ;
	else
	    return Search(root->right , data) ;
}




int main()
{
	Node* root = NULL ;
	
	root = Insert(root , 5) ;
	root = Insert(root , 10) ;
	root = Insert(root , 15) ;
	root = Insert(root , 2) ;
	root = Insert(root , 7) ;
	root = Insert(root , 9) ;
	
	int num ;
	cout<<"Enter a number to be searched : " <<endl;
	cin >> num ;
	
	(Search(root , num)) ? cout << "FOUND\n" : cout << "NOT FOUND \n";
}
