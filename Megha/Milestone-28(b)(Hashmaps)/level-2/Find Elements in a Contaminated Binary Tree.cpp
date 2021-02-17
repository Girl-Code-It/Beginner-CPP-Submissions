//https://leetcode.com/problems/find-elements-in-a-contaminated-binary-tree/submissions/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class FindElements {
public:
    unordered_map<int,int> m;
    FindElements(TreeNode* root) {
        if(root){
            root->val = 0;
            m[0]++;
            
            queue<TreeNode*> q;
            q.push(root);
            
            while(!q.empty()){
                TreeNode* current = q.front();
                q.pop();
                int x = current->val;
                if(current->left){
                    q.push(current->left) ;
                    current->left->val = 2*x + 1;
                    m[current->left->val]++;
                }
                if(current->right){
                    q.push(current->right) ;
                    current->right->val = 2*x + 2;
                    m[current->right->val]++;
                }
            }
        }
    }
    
    bool find(int target) {
        for(auto i:m){
            if(i.first == target)
                return true;
        }
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
