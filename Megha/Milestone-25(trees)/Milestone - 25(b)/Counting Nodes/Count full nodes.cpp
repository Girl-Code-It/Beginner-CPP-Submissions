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

int countFullNodes(Node* root)
{
    int fullNodes = 0;
  if(root == NULL){
      return 0;
  }

  stack<Node*> s;
  s.push(root);
  
  while(!s.empty()){
      Node* current = s.top();
      s.pop();
      if(current->left != NULL && current->right != NULL){
          fullNodes = fullNodes + 1;
      }
      if(current->left){
          s.push(current->left);
      }
      if(current->right){
          s.push(current->right);
      }
  }
  return fullNodes;
}


int main() {
    
    /*
    Node* root;
    root = newNode(25);
    root->left = newNode(27);
    root->right = newNode(29);
    root->left->left = newNode(7);
    root->left->right = newNode(91);
    root->right->left = newNode(13);
    root->right->right = newNode(55);
    */
    struct Node *root = newNode(2); 
    root->left     = newNode(7); 
    root->right     = newNode(5); 
    root->left->right = newNode(6); 
    root->left->right->left = newNode(1); 
    root->left->right->right = newNode(11); 
    root->right->right = newNode(9); 
    root->right->right->left = newNode(4); 
    cout<<countFullNodes(root);
}
