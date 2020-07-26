class Solution {
public:
    map<int,multiset<pair<int,int>>>m;
    void bfs(TreeNode* node , int x , int y)
    {
        if(!node) return ;
        
        m[x].insert({y , node->val});
        bfs(node->left , x-1 , y+1);
        bfs(node->right , x+1 , y+1);
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        bfs(root , 0 , 0);
        vector<int>v;
        vector<vector<int>>ans;
        
        for(auto& [x , st] : m)
        {
            for(auto& [y , val] : st)
                v.push_back(val);
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
};
