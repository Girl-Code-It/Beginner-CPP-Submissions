/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        if(root == NULL){
            return {};
        }
        
        vector<int> v;
        stack<Node*> s;
        s.push(root);
        
        while(!s.empty()){
            Node* current = s.top();
            s.pop();
            v.push_back(current->val);
            for(auto i:current->children){
                s.push(i);
            }
        }
        
        reverse(v.begin(),v.end());
        
        return v;
    }
};
