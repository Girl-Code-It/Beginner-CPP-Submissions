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
    vector<double> averageOfLevels(TreeNode* root) {
        if(root == NULL){
            return {};
        }
        
        vector<double> v;
        queue<TreeNode*> q;
        q.push(root);
        double ans = 0;
        
        while(!q.empty()){
            int s = q.size();
            for(int i=0;i<s;i++){
            TreeNode* current = q.front();
            q.pop();
            ans += current->val;
            
            if(current->left){
                q.push(current->left);
            }
            if(current->right){
                q.push(current->right);
            }
           }
            v.push_back(ans/s);
            ans = 0;
        }
        return v;
    }
};
