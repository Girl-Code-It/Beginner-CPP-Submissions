class Solution
{
public :
    //PreOrder = <root><left><right>
    vector<int> preorderTraversal(TreeNode* root)
    {
        //If empty tree
        if(!root)
            return {};
        
        //Store the address of TreeNode
        stack<TreeNode*>s;
        
        //Store the Value of TreeNode
        vector<int>v;

        while(1)
        {
            //If it is not Leaf Node
            if(root)
            {
                
                s.push(root);
                //Store root value
                v.push_back(root -> val);
                //Go Left Subtree
                root = root -> left;
            }
            else
            {
                //If Stack is empty
                if(s.empty())
                    break;
                else
                {
                    //if leftSubtree is over
                    root = s.top();
                    s.pop() ;
                    root = root -> right;
                }
            }
        }
        
       return v;
    }
};