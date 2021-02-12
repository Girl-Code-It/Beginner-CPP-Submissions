//https://leetcode.com/problems/subarray-sum-equals-k/

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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL){
            return ans;
        }
        
        map<int,vector<int>> m;
        int hd=0;
        queue<pair<int,TreeNode*>> q;
        q.push(make_pair(hd,root));
        
        while(!q.empty()){
            map<int,vector<int>> tem;
            int n = q.size();
          for(int i=0;i<n;i++){
            pair<int,TreeNode*> temp = q.front();
            TreeNode* current = temp.second;
            hd = temp.first;
              q.pop();
            tem[hd].push_back(current->val);
             if(current->left){
                 q.push(make_pair(hd-1,current->left));
             }
             if(current->right){
                 q.push(make_pair(hd+1,current->right));
             }
          }
            for(auto i:tem){
                sort(i.second.begin(),i.second.end());                 
                m[i.first].insert(m[i.first].end(),i.second.begin(),i.second.end());
            }
        }
        
        for(auto i:m){
            ans.push_back(i.second);
        }
        
        return ans;
    }
};
