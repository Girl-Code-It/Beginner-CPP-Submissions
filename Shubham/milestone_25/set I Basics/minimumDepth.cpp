class Solution {
public:
    int minDepth(TreeNode* root) {
    
        if (root == nullptr)
                return 0;

        int r = 1;
        queue<TreeNode *> q;

        q.push(root);
        q.push(nullptr);

        while (q.empty() == false)
        {
                root = q.front();

                if (root != nullptr)
                {
                        if (root->left == nullptr && root->right == nullptr)
                                return r;

                        q.pop();

                        if (root->left != nullptr)
                                q.push(root->left);

                        if (root->right != nullptr)
                                q.push(root->right);
                        
                }

                else
                {
                        q.pop();
                        r++;
                        if(q.empty() == true) break;
                        q.push(nullptr);
                }
        }
        return r;
    }
};
