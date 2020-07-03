class Solution
{
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder)
    {
        return build(postorder,0,postorder.size()-1,inorder,0,inorder.size()-1);
    }

    TreeNode* build(vector<int>& postorder,int pStart,int pEnd,vector<int>& inorder,int iStart,int iEnd)
    {
        if(pStart > pEnd)
            return NULL;

        int i = find(inorder.begin(),inorder.end(),postorder[pEnd]) - inorder.begin();

        TreeNode* node = new TreeNode(postorder[pEnd]);
        if(pStart == pEnd)
            return node;
            
        node->left = build(postorder,pStart,pStart+i-iStart-1,inorder,iStart,i-1);
        node->right = build(postorder,pStart+i-iStart,pEnd-1,inorder,i+1,iEnd);

        return node;
    }
};