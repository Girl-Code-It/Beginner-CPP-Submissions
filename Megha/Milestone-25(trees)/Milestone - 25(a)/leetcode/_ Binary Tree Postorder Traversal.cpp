/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> v;
        
            if(root == NULL){
                return {};
            }
        
        s.push(root);
        
        while(!s.empty()){
            TreeNode* current = s.top();
            s.pop();
            v.push_back(current->val);
            if(current->left){
                s.push(current->left);
            }
            if(current->right){
                s.push(current->right);
            }
        }
            reverse(v.begin(),v.end());
        return v;
    }
};
