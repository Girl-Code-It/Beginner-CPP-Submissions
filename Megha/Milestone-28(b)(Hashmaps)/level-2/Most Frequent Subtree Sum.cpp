//https://leetcode.com/problems/most-frequent-subtree-sum/submissions/

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
    int maxfreq = 0 ;
    unordered_map<int,int> m;
    int FindSum(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        
        int sum=0;
        sum = root->val + FindSum(root->left) + FindSum(root->right);
        
        m[sum]++;
        maxfreq = max(maxfreq,m[sum]);
        
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        FindSum(root);
        vector<int> ans;
        
      
        for(auto i:m){
            if(i.second == maxfreq)
              ans.push_back(i.first);
        }
        
        
        return ans;
    }
};
