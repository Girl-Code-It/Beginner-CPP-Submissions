// check if a tree is symmetric or not

class Solution {
    public:
    bool bfs(TreeNode *root){
    	
        if(root == nullptr)  // if empty return true.
            true;

        queue<TreeNode*> q;
        q.push(root);
        q.push(root);

        while(!q.empty()){
            TreeNode *curr_l = q.front();
            q.pop();
            TreeNode *curr_r = q.front();
            q.pop();
            if(curr_l == nullptr && curr_r == nullptr){
                continue; 
            }
            if(curr_l == nullptr || curr_r == nullptr){
                return false;
            }
            if(curr_l->val!=curr_r->val){
                return false;
            }
            q.push(curr_l->left);
            q.push(curr_r->right);
            q.push(curr_l->right);
            q.push(curr_r->left);
        }
        return true;
    }

    bool isSymmetric(TreeNode* root) {
        return bfs(root);
    }
};
