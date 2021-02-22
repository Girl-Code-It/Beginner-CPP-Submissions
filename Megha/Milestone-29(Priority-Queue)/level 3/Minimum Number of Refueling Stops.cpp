//https://leetcode.com/problems/minimum-number-of-refueling-stops/

class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int size = stations.size();
        int i=0,ans;
        priority_queue<int> q;
        
        for(ans = 0; startFuel < target ;ans++){
            while(i<size && stations[i][0]<=startFuel){
                q.push(stations[i++][1]);
            }
            if(q.empty()) return -1;
            startFuel += q.top(); q.pop();
        }
        
        return ans;
    }
};
