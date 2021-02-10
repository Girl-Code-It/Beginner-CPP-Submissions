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
    //in this we will use level order traversal as it is pointing in exact way we       //want in this question
    Node* connect(Node* root) {
        if(root == NULL){
            return NULL;
        }
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            Node* current = q.front();
            q.pop();
            if(current->left){
                q.push(current->left);
                current->left->next = current->right;
            }
            if(current->right){
                q.push(current->right);
                if(current->next)
                    current->right->next = current->next->left;
            }
        }
        
        return root;
    }
};
