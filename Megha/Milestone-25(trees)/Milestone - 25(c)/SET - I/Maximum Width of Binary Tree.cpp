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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }
        
        //if root is not null then there must be one value so width will be equal to 1
        int result = 1;
        
        //we are making pair to include two things tree node and one the index value
        queue<pair<TreeNode*,int>> q;
        
        //we will intialise index value to 0;
        q.push({root,0});
        
        while(!q.empty()){
            int size = q.size();
            int start = q.front().second;
            int end = q.back().second;
            result = max(result,end-start+1);
            
            for(int i=0;i<size;i++){
                pair<TreeNode*,int> p = q.front();
                q.pop();
                int index = p.second - start;
                if(p.first->left){
                    q.push({p.first->left,2*index + 1});
                }
                if(p.first->right){
                    q.push({p.first->right,2*index + 2});
                }
            }
        }
        
        return result;
    }
};
