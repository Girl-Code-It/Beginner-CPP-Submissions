typedef pair<int,int> p ;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>m;
        for(auto i : nums)
            m[i]++ ;
        
        priority_queue<p , vector<p> , greater<p>>q;
        for(auto i : m)
        {
            q.push(make_pair(i.second , i.first));
            if(q.size() > k)
                q.pop();
        }
        
        vector<int>ans;
        while(!q.empty())
        {
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};
