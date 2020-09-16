/* (https://leetcode.com/problems/diameter-of-binary-tree/)

Question:- Given a binary tree, you need to compute the length of the diameter of the tree. 
The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

*/

class Solution
{
public:
    int solve(TreeNode* root, int &res)
    {
        // if tree is empty then diameter will be 0.
        if(!root)
            return 0;
        
        // At any position we will find the length of its left and right subtree.
        int left = solve(root -> left, res);
        int right = solve(root -> right, res);
 
        // longest path can be either any subtree diameter from its left leaf node to right leaf node including its root node 
        // or longest path can be the maximum root node + maximum of height of left and right subtree in case of negative numbers 
        // we will choose the maximum out of both.
        res = max(1+left+right, res);

        return max(left, right) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root)
    {
        if(!root)
            return 0;
        
        int res = INT_MIN;
        solve(root, res);
        return res -1;
    }
};
