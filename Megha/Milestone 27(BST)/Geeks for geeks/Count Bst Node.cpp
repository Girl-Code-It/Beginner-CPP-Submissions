//https://practice.geeksforgeeks.org/problems/count-bst-nodes-that-lie-in-a-given-range/1/#

/*

The structure of a BST node is as follows:

struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/
int getCount(Node *root, int l, int h)
{
    int count = 0;
  // your code goes here  
  if(root == NULL){
      return 0;
  }
  if(root->data >= l && root->data <= h){
      count++;
  }
  
  return count + getCount(root->left,l,h) + getCount(root->right,l,h);
}
