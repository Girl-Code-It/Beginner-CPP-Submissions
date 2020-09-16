/* (https://leetcode.com/problems/binary-tree-maximum-path-sum/)

Question:- Given a non-empty binary tree, find the maximum path sum.
For this problem, a path is defined as any sequence of nodes from some starting node to any node in the tree along the parent-child connections.
The path must contain at least one node and does not need to go through the root.

*/

class Solution 
{
public:
     int solve(TreeNode* root, int &res)
     {
        // empty tree will have no path and therefore no path sum.
        if(!root)
            return 0;
          
        // At any node.
        // finding maximum path sum from both left and right sub-tree.
        int left = solve(root -> left, res);
        int right = solve(root -> right, res);
 
        // If tree have negative numbers also in it then it can happen that sum will decrease after adding left and right subtree in it 
        // so in  that case we will take maximum of (after including left and right subtree and after excluding it by only adding their root node).
        int temp = max(max(left,right) + root->val, root->val);
        // Maximum path sum can be :-
        // 1. a particluar subtree of the whole tree after adding its left and right subtree in it.
        // 2. or it can be the whole main tree from its left leaf node and right root node.
        // we will take maximum of both.
        int ans = max(temp, left + right + root->val);
        res = max(ans, res);

        return temp;
     }
    
    int maxPathSum(TreeNode* root) 
    {
        if(!root)
            return 0;
        
        int res = INT_MIN;
        solve(root, res);
        return res;
    }
};
