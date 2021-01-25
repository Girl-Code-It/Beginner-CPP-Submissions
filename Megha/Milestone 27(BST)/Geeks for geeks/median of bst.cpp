//https://practice.geeksforgeeks.org/problems/median-of-bst/1/#

/*
Structure of the binary Search Tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
void Inorder(struct Node *root, vector<int> &v){
    if(root == NULL){
          return;
      }
      
      Inorder(root->left,v);
      v.push_back(root->data);
      Inorder(root->right,v);
}
// your task is to complete the Function
// Function should return median of the BST
float findMedian(struct Node *root)
{
      //Code here
      if(root == NULL){
          return 0;
      }
      
      vector<int> v;
      Inorder(root,v);
      
      int size = v.size();
      float median;
      int mid = v.size()/2;
      if(size%2 == 1){
          median = v[mid];
      }
      else{
          median = (v[mid] + v[mid-1])/2.0;
      }
      return median;
}
