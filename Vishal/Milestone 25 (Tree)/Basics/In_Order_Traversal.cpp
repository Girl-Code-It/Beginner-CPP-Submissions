class Solution
{
public :
    //inOrder = <left><root><right>
    vector<int> inorderTraversal(TreeNode* root)
    {
        //If empty tree
        if(!root)
            return {};

        //Store the address of TreeNode
        stack<TreeNode*>s;

        //Store the Value of TreeNode
        vector<int>v;

        //For Traversing
        TreeNode* curt = root;

        while(curt || !s.empty())
        {
            //Go end Of Left Subtree
            while(curt)
            {
                s.push(curt);
                curt = curt -> left;
            }
            
            //Print The last pushed Element
            curt = s.top();
            s.pop();
            v.push_back(curt -> val);
            //Move toward Right Subtree
            curt = curt -> right;
        }
        
        return v;
    }
};