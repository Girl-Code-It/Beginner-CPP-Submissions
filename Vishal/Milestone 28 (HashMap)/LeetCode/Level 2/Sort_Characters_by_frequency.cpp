class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char,int>m;

        for(int i=0; s[i]; i++)
            m[s[i]]++;

        priority_queue<pair<int,char> > q;
        for(auto itr : m)
            q.push({itr.second,itr.first});
            
        string res = "";
        while(!q.empty())
        {
            pair<int,char> temp = q.top();
            q.pop();
            
            while(temp.first--)
                res += temp.second;
        }

        return res;
    }
};

//Second Solution
bool cmp(pair<int,char>& a,pair<int,char>& b)
{
    return a.first > b.first;
}

class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char,int>m;

        for(int i=0; s[i]; i++)
            m[s[i]]++;

        vector<pair<int,char> > v;
        for(auto itr : m)
            v.push_back({itr.second,itr.first});
            
        sort(v.begin(),v.end(),cmp);

        string res = "";
        for(int i=0,n = v.size(); i<n; i++)
        {
            while(v[i].first--)
                res += v[i].second;
        }

        return res;
    }
};