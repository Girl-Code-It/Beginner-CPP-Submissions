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
    vector<vector<int>> levelOrder(Node* root) {
        if(root == NULL){
            return {};
        }
        
        queue<Node*> q;
        q.push(root);
        vector<int> v;  
        vector<vector<int>> ans;
        
        
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
            Node* current = q.front();
            q.pop();
            for(auto i:current->children){
                q.push(i);
                
            }
            v.push_back(current->val);}
            ans.push_back(v);
            v.clear();
        }
        
        return ans;
    }
};
