class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        
        if(root == nullptr)
                return true;
        
        queue<TreeNode*>q;
        q.push(root);
        int x = root->val;

        while(q.empty() == false)
        {
                root = q.front();
                if(x != root->val)
                        return false;
                q.pop();

                if(root->left != nullptr)
                        q.push(root->left);
                if(root->right != nullptr)
                        q.push(root->right);
        }
        return true;   
    }
};
