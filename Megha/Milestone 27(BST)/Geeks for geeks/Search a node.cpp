//https://practice.geeksforgeeks.org/problems/search-a-node-in-bst/1/?track=binary-search-tree&batchId=117


/* Node structure 

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

/*You are required to complete this method*/
bool search(Node* root, int x)
{
    //Your code here
    if(root == NULL){
        return 0;
    }
    else if(x == root->data){
        return 1;
    }
    else if(x < root->data){
        return search(root->left,x);
    }
    else 
    return search(root->right,x);
}
