/* Time complexity:- (V+E) where V is the no of vertices and E is the no of edges.

We are applying dfs + Pruning in this Problem.

Approach:-We have to find minimum fare but the condition is that the stops coming between source and destination should be atmost K.
So, we will calculate fare or one path from source to destination and will store it. Then if at while calculating fare for any other
path if we are getting more fare at any stop between source and destination then we will not calculate fare further for that path.
and this is called pruning.

We will go through each stop coming in our path and at every stop we will reduce the value of k by 1.

*/

class Solution {
public:
    void solve(vector<vector<int>> &adj, vector<vector<int>> &cost, int src, int dst, int k, int &fare, int totalCost, vector<bool>&visited)
    {
    	// if k is less than -1 means we have reached the destination successfully from the source as we are decrementig k at destination also.
        if(k < -1)
            return;
        
        // If our source has become destination means we reache the destination so we will return the min of the total cost calculated till now and
        // the fare value we had for the first path.
        if(src == dst)
        {
            fare = min(fare, totalCost);
            return;
        }
        
        // otherwise we will make the source node visited and will visit all nodes coming in the path one by one.
        visited[src] = true;
        for(int i = 0; i < adj[src].size(); i++)
        {
        	// if visited is false and total cost till now is less than or equal to the fare for the other path only then we will proceed
        	// to this path
            if(!visited[adj[src][i]] && (totalCost + cost[src][adj[src][i]] <= fare))
                solve(adj, cost, adj[src][i], dst, k-1, fare, totalCost + cost[src][adj[src][i]], visited);
                
        }
        
        visited[src] = false;
    }
    
    
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        // adjacency list.
        vector<vector<int>> adj(n);
        // cost matrix.
        vector<vector<int>> cost(n+1, vector<int>(n+1));
        
        // making the graph.
        for(int i = 0; i < flights.size(); i++)
        {
            adj[flights[i][0]].push_back(flights[i][1]);
            cost[flights[i][0]][flights[i][1]] = flights[i][2];
        }
        
        // visited vector to show node is visited or not.
        vector<bool> visited(n+1, false);
        int fare = INT_MAX;
        solve(adj, cost, src, dst, K, fare, 0, visited);
        
        // if fare is equal to initialised one then we haven't get any path.
        if(fare == INT_MAX)
            return -1;
        return fare;
    }
};
