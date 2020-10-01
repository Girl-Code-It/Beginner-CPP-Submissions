class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>>m;
        vector<vector<string>>res;
        for(auto s : strs)
        {
            string temp = s;
            sort(temp.begin() , temp.end());
            m[temp].push_back(s);
        }
        for(auto x : m)
            res.push_back(x.second);
        return res;
    }
};
