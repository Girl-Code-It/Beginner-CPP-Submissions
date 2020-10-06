// https://leetcode.com/problems/possible-bipartition/

/*
    Question : Bipartition is possible or not.

    Solution 1: Using two HashMap/HashSet such that no two person dislike each other are in same group.
    It is very easy ti implement so i will not going to code it.

    Solution 2: Using BFS 

    We can do something similiar like solution 1 using graph as well. What we will do ? 
    we will choose two color as two set means assume all vertices in graph which has marked 0 are in 
    one set, and which were marked as 1 in another set.

    Now there shouldn't two adjacent vertex have same color. If two adjacent vertex have same color then
    we will return false, else return true.

    Now to divide a graph in such a manner is known as Bipartite Graph. It is a graph having even number of edges
    such that there will be no edge between two vertices, which were in same set.

    Time Complexity - O(V + E)
*/
class Solution
{
    bool isBipartite(int node, vector<vector<int>> &adj, vector<int> &color)
    {
        queue<int> q;
        q.push(node);
        color[node] = 1;

        while (!q.empty())
        {
            int curr = q.front();
            q.pop();

            for (int ele : adj[curr])
            {
                // Two adjacent vertex have same color
                if (color[ele] == color[curr])
                    return false;

                // If it is colorless, then color it with different color as parent node
                else if (color[ele] == -1)
                {
                    color[ele] = 1 - color[curr];
                    q.push(ele);
                }
            }
        }
        return true;
    }

public:
    bool possibleBipartition(int N, vector<vector<int>> &dislikes)
    {
        // Adjacency list
        vector<vector<int>> adj(N + 1);

        // Build a Undirected graph. Undirected Graph Why ?
        // Because if (a,b) a dislikes b is equivalent to b dislikes a.
        for (int i = 0; i < dislikes.size(); i++)
        {
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }

        // Color(1 & 0 are two color) & Initialize with -1(Colorless)
        vector<int> color(N + 1, -1);

        for (int i = 1; i <= N; i++)
        {
            // If it is colorless, then color it and check if 
            //two adjacent vertex have same color then return false
            if (color[i] == -1 && !isBipartite(i, adj, color))
                return false;
        }
        return true;
    }
};