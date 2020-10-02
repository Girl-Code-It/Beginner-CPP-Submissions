// https://leetcode.com/problems/cheapest-flights-within-k-stops/

/*
    It also have multiple solution. But we will see that algorithms later....

    Now we do this problem using DFS + Pruining (TO Prune unneccesary Calls)

*/

class Solution
{
    void solve(vector<vector<pair<int, int>> >&adj, int src, int dst, int k, int &fare, int totCost, vector<int>&visited)
    {
        if(k < -1)
        return;

        if (src == dst)
        {
            fare = min(fare, totCost);
            return;
        }

        visited[src] = true;
        for (int i = 0; i < adj[src].size(); i++)
        {
            if (!visited[adj[src][i].first] && totCost + adj[src][i].second <= fare)
            {
                solve(adj, adj[src][i].first, dst, k-1, fare, totCost + adj[src][i].second, visited);
            }
            
        }
        
        visited[src] = false;
    }

public:
    int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int K)
    {
        // Build a directed weighted graph, pair first element is denoting destination & second element denotes fare.
        vector<vector<pair<int, int>> > adj(n);

        // Add edges
        for (int i = 0; i < flights.size(); i++)
        {
            adj[flights[i][0]].push_back({flights[i][1], flights[i][2]});
        }
        
        // Visited vector to check,that stops are already visited or not
        vector<int>visited(n, 0);
        int fare = INT_MAX;
        solve(adj, src, dst, K, fare, 0, visited);

        return fare == INT_MAX ? -1 : fare;
    }
};