
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return Tree(inorder , postorder , 0 , inorder.size()-1 , 0 , postorder.size()-1);
    }
    
    TreeNode* Tree(vector<int>& inorder, vector<int>& postorder , int iBegin , int iEnd , int pBegin ,int pEnd )
    {
        if(iBegin>iEnd || pBegin>pEnd)
            return NULL ;
        
        int val = postorder[pEnd];
        
        int i = iBegin;
        while(inorder[i]!=val)
            i++;
        
        TreeNode* t = new TreeNode(val);
        t->left = Tree( inorder ,postorder, iBegin , i-1 , pBegin , pBegin+(i-1-iBegin));
        t->right = Tree(inorder, postorder , i+1 , iEnd , pEnd-(iEnd-i) , pEnd-1);
        return t;
    }
};
