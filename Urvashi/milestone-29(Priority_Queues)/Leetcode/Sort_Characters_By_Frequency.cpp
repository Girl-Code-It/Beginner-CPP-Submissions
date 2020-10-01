typedef pair<int,char> p;
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>m;
        for(auto i : s)
            m[i]++ ;
        
        priority_queue<p>q;
        for(auto i = 0 ; i < s.size() ; i++)
        {
            q.push(make_pair(m[s[i]] , s[i]));
        }
        
        string ans = "";
        while(!q.empty())
        {
            for(int i = 0 ; i < q.top().first ; i++){
                ans += q.top().second;
                q.pop();
            }
           
        }
        return ans;
    }
};
