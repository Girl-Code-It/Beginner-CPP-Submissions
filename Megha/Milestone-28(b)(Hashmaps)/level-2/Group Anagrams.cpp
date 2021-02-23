//https://leetcode.com/problems/group-anagrams/submissions/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        int l = strs.size();
        unordered_map<string,vector<string>> m;
        
        for(int i=0;i<l;i++){
            string ch = strs[i];
            sort(ch.begin(),ch.end());
            cout<<ch<<" ";
            m[ch].push_back(strs[i]);
        }
        
        for(auto i:m){
            v.push_back(i.second);
        }
        
        return v;
    }
};
