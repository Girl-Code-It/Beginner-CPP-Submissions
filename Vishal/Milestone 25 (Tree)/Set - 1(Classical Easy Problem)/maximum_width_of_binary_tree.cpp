class Solution
{
public:
    int widthOfBinaryTree(TreeNode* root)
    {
        if(!root)
            return 0;

        queue<TreeNode*> q;
        root->val = 0;
        q.push(root);
        int result = 0;

        while(!q.empty())
        {
            int s = q.size(),minIndex;

            for(int i = 0; i < s; i++)
            {
                TreeNode* curr = q.front();
                q.pop();

                if(i == 0)
                    minIndex = curr->val;
                if(i == s-1)
                    result = max(result,curr->val - minIndex + 1);

                curr->val -= minIndex;
                if(curr->left)
                {
                    curr->left->val = 2*(curr->val);
                    q.push(curr->left);
                }

                if(curr->right)
                {
                    curr->right->val = 2*(curr->val)+1;
                    q.push(curr->right);
                }
            }
        }
        return result;
    }
};