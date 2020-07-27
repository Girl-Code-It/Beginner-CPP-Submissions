bool cmp(const pair<char,int>&a , const pair<char,int>&b)
{
        return a.second > b.second;
}

class Solution {
public:
  
    string frequencySort(string s) {
        unordered_map<char,int >m;
        for(int i = 0 ; i < s.size() ; i++)
            m[s[i]]++ ;
        
        vector<pair<char,int>>v;
        string str = "";
        
        for(auto i : m)
            v.emplace_back(i.first , i.second);
        
        sort(v.begin() , v.end() , cmp);
        
        for(auto i = 0 ; i < v.size() ; i++)
        {
            while(v[i].second--)
                str += v[i].first;
        }   
        
        return str;
    }
};
