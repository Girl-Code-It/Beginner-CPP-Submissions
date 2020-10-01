class Solution
{
public:
    vector<vector<int>> verticalTraversal(TreeNode* root)
    {
        map<int, multiset<pair<int, int>>> mp;
        traverse(root, 0, 0, mp);
        vector<vector<int>> res;
        vector<int>v;
        
        for(auto& [x, st] : mp)
        {
            for(auto& [y, val] : st)
                v.push_back(val);
            
            res.push_back(v);
            v.clear();
        }

        return res;
    }
    
    void traverse(TreeNode* node, int x, int y, map<int, multiset<pair<int, int>>>& mp)
    {
        if(!node)
            return;

        mp[x].insert({y, node->val});
        traverse(node->left, x-1, y+1, mp);
        traverse(node->right, x+1, y+1, mp);
    }
};