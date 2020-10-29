class Solution
{
public:
    int Sum(vector<int>& v,int val)
    {
        int n = v.size(),sum = val;
        int i = find(v.begin(),v.end(),val) - v.begin();

        while(i<n-1)
            sum += v[++i];

        return sum;
    }

    void inorder(TreeNode* root,vector<int>& v)
    {
        if(!root)
            return ;

        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }

    TreeNode* bstToGst(TreeNode* root)
    {
        vector<int>v;
        inorder(root,v);
        TreeNode* root1 = root;
        stack<TreeNode*>st;
        st.push(root1);

        while(root1 || !st.empty())
        {
            while(root1)
            {
                st.push(root1);
                root1 = root1->left;
            }

            root1 = st.top();
            st.pop();
            root1->val = Sum(v,root1->val);
            root1 = root1->right;
        }
        return root;
    }
};