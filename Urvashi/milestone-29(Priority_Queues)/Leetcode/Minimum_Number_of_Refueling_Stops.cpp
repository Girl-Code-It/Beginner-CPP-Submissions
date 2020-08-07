class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        if(stations.empty()) // if there is not a single station btw start and target
        {
            if(startFuel >= target) 
                return 0 ;
            return -1;       // if we have less fuel than the target initially then we cant reach.
        }
        
        if(startFuel < stations[0][0]) // if starting fuel is less than the fuel required to reach first
            return -1;                 //station then we cant reach.
           
        priority_queue<int>q;
        int currFuel , count = 0 , diff , i = 0 , n = stations.size();
        
        currFuel = startFuel - stations[i][0]; // currfuel is diff btw the two stations distance.
        for(int i = 0 ; i < n ; i++)
        {
            // distance from next station or target.
            diff = (i < (n-1) ? stations[i+1][0] : target) - stations[i][0] ;
            q.push(stations[i][1]);
            
            // until fuel is sufficient to reach next station .
            while(!q.empty() && currFuel < diff)
            {
                currFuel += q.top();
                q.pop();

                count++;
            }
            currFuel -= diff;
            if(currFuel < 0) // if fuel is not sufficient yet.
                return -1;
        }
        return count;
    }
};
