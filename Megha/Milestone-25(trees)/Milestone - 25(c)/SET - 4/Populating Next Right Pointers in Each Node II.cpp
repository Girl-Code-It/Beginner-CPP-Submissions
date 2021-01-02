/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL){
            return NULL;
        }
        
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
            
            Node* current = q.front();
            q.pop();
            if(q.empty() && current == NULL){
                break;
            }
            else if(current == NULL){
                q.push(NULL);
            }
            else{
                current->next = q.front();
                if(current->left){
                q.push(current->left);}
                if(current->right){
                q.push(current->right);}
            }
            
        }
        
        return root;
    }
};
