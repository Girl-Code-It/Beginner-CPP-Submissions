class Solution {
public:
    vector<TreeNode*> v;
    map<string,int> m;
    string duplicate(TreeNode* root){
        if(!root)
            return "#";
        
        string x = duplicate(root->left);
        string y = duplicate(root->right);
        string s = to_string(root->val) + ',' + x + ',' + y ;
        m[s]++;
        
        if(m[s] == 2){
            v.push_back(root);
        }
        return s;

    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        duplicate(root);
        return v;
        
    }
};
