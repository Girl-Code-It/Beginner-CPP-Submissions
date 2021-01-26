
//https://practice.geeksforgeeks.org/problems/find-a-pair-with-given-target-in-bst/1/2

/*Complete the function below
Node is as follows
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

// root : the root Node of the given BST
// target : the target sum
int isPairPresent(struct Node *root, int target)
{
//add code here.
if(root == NULL){
    return 0;
}

queue<Node*> q;
q.push(root);
vector<int> v;

while(!q.empty()){
    Node* current = q.front();
    q.pop();
    v.push_back(current->data);
    if(current->left){
        q.push(current->left);
    }
    if(current->right){
        q.push(current->right);
    }
}

for(int i=0;i<v.size();i++){
    for(int j=i+1;j<v.size();j++){
        if(v[i] + v[j] == target){
            return 1;
        }
    }
}

return 0;
}
