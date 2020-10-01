bool cmp(pair<string,int>& a,pair<string,int>& b)
{
    if(a.second > b.second)
        return true;
    else if(a.second == b.second)
        return a.first < b.first;
    else
       return false;
}

class Solution 
{
public:
    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        unordered_map<string,int>m;
        int n = words.size();

        if(n == 0)
            return {};

        for(int i=0; i<n; i++)
            m[words[i]]++;

        vector<pair<string,int> >v;

        for(auto itr : m)
            v.push_back(itr);

        sort(v.begin(), v.end(), cmp);

        vector<string>ans;

        for(int i=0; i<k; i++)
            ans.push_back(v[i].first);

        return ans;
    }
};