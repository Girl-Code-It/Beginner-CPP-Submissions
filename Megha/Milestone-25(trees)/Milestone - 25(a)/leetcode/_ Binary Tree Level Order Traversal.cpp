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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        vector<int> v;
        
        if(root == NULL){
            return {};
        }
        
        q.push(root);
        
        while(!q.empty()){
            int s = q.size();
            for(int i=0;i<s;i++){
            TreeNode* current = q.front();
            v.push_back(current->val);
            q.pop();
            if(current->left){
                q.push(current->left);
            }
            if(current->right){
                q.push(current->right);
            }
            }
            ans.push_back(v);
            v.clear();
        }
    
        return ans;
    }
};
