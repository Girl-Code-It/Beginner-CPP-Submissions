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
    int pathSum(TreeNode* root, int sum) {
        if(root == NULL){
            return 0;
        }
        return myCount(root,sum) + pathSum(root->left,sum) + pathSum(root->right,sum);
    }
    int myCount(TreeNode* root, int sum) {
        int count = 0;
        if(root == NULL){
            return 0;
        }
        if(sum - root->val == 0){
            count++;
        }
        
        
        return count + myCount(root->left,sum - root->val) + myCount(root->right,sum - root->val);
    }
};
