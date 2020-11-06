bool cmp(const pair<int, string> &a, const pair<int, string> &b)
{
    if (a.first > b.first)
        return true;
    else if (a.first == b.first)
        return (a.second < b.second);
    else
        return false;
}

class Solution
{
public:
    vector<string> topKFrequent(vector<string> &words, int k)
    {
        map<string, int> m;
        for (auto i : words)
            m[i]++;
        vector<pair<int, string>> v;
        for (auto i : m)
            v.push_back({i.second, i.first});
        sort(v.begin(), v.end(), cmp);
        vector<string> ans;

        for (auto i : v)
        {
            ans.push_back(i.second);
            if (ans.size() == k)
                break;
        }
        return ans;
    }
};
