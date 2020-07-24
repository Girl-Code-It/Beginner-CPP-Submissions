class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        unordered_map<string,vector<string> > m;

        for(int i=0,n = strs.size(); i<n; i++)
        {
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            m[temp].push_back(strs[i]);
        }

        vector<vector<string> >res;

        for(auto s : m)
            res.push_back(s.second);

        return res;
    }
};