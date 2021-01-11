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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        if(root == NULL){
            return {};
        }
        
        vector<vector<int>> v;
        int count = 0;
        vector<int> temp;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            count++;
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode* current = q.front();
                temp.push_back(current->val);
                q.pop();
                if(current->left){
                    q.push(current->left);
                }
                if(current->right){
                    q.push(current->right);
                }
            }
            if(count%2==0){
                reverse(temp.begin(),temp.end());
            }
            v.push_back(temp);
            temp.clear();
        }
        
        cout<<count;
        return v;
    }
};
