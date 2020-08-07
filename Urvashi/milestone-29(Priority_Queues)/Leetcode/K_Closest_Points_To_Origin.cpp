class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<vector<int>>ans;
        priority_queue<pair<int,pair<int,int>>>q;
        
        for(int i = 0 ; i < points.size() ; i++)
        {
            q.push(make_pair(pow(points[i][0],2) + pow(points[i][1],2) , make_pair(points[i][0], points[i][1])));
            
            if(q.size() > K)
                q.pop();
        }
        
        while(!q.empty())
        {
            ans.push_back({q.top().second.first , q.top().second.second});
            q.pop();
        }
        return ans;
    }
};
