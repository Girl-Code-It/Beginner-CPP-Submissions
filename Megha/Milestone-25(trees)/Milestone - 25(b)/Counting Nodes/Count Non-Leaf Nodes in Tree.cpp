// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

int countNonLeafNodes(Node* root);

/* Driver program to test size function*/
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
     struct Node *child;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = new Node(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = new Node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     cout<<countNonLeafNodes(root)<<endl;
  }
  return 0;
}
// Contributed by: Harshit Sidhwa
// } Driver Code Ends


//User function Template for C++
/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
int countNonLeafNodes(Node* root)
{
    //write code here
     int leaf = 0;
  if(root == NULL){
      return 0;
  }
  
  stack<Node*> s;
  s.push(root);
  
  while(!s.empty()){
      Node* current = s.top();
      s.pop();
      if(current->left || current->right){
          leaf++;
      }
      if(current->left){
          s.push(current->left);
      }
      if(current->right){
          s.push(current->right);
      }
  }
  return leaf;
}
