class Solution
{
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
    {
        return build(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
    }

    TreeNode* build(vector<int>& preorder,int pStart,int pEnd,vector<int>& inorder,int iStart,int iEnd)
    {
        if(pStart > pEnd)
            return NULL;

        int i = find(inorder.begin(),inorder.end(),preorder[pStart]) - inorder.begin();

        TreeNode* node = new TreeNode(preorder[pStart]);

        node->left = build(preorder,pStart+1,pStart+i-iStart,inorder,iStart,i-1);
        node->right = build(preorder,pStart+1+i-iStart,pEnd,inorder,i+1,iEnd);

        return node;
    }
};