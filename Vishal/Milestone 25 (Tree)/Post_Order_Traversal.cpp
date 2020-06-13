class Solution
{
public :
    //postOrder = <left><right><root>
    /*Just go end of the right substree and then reverse the ans*/
    vector<int> postorderTraversal(TreeNode* root)
    {
        //If empty tree
        if(!root)
            return {};

        //Store the address of TreeNode
        stack<TreeNode*>s;
        s.push(root);
        
        //Store the Value of TreeNode
        vector<int>v;

        //For Traversing
        TreeNode* curt;

        while(!s.empty())
        {
            //Print Right Node of Tree
            curt = s.top();
            s.pop();
            v.push_back(curt -> val);
            
            if(curt -> left)
            {
               s.push(curt ->left);  
            }
            
            if(curt -> right)
            {
              s.push(curt -> right);
            }
         }
        
        //Reverse
        reverse(v.begin(),v.end());
        return v;
    }
};