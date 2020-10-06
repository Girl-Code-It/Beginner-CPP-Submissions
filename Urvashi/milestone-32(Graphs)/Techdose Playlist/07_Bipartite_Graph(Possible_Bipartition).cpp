/* (https://leetcode.com/problems/possible-bipartition/)

Time complexity:- O(V+E) where V is the no of vertices and E is the no of edges.
V is to traverse every vertice and E is to color the nodes of the graph.


Approach:- As we have used graph coloring method here, and we have to put those people in  
different sets who hate each other so to check if those people are in diff sets or not we will 
make a graph and we will check if this graph is Bipartite or not.

Bipartite graph is that graph in which no of edges is even and we can observe that no of edges will 
be odd only if we have a edge between vertices present in the same set and if this happens means 
we have two people who hate each other in same set so we will return false otherwise return true.

To check if a graph is Bipartite or not we will use graph coloring method in which we will check that 
if a node is adjacent to our current node then it should have different color . for this, we will take two 
colors (1 and 0) so if a color is color[curr] then its adjacent color can be derived as 1-color[curr]. If all 
the adjacent nodes of all the vertices are having diff color from the vertice then its a Bipartite graph
and we will return true.

*/
class Solution {
public:
    bool isBipartite(vector<vector<int>> &adj, int N, int node, vector<int> &color)
    {
        queue<int> q;
        q.push(node);
		// we will make the color of first node to be 1.
        color[node] = 1;
        
        // process current graph component using BFS.
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();
            for(int element: adj[curr])
            {
			   // if current node and its adjacent node has same color then its not Bipartite.
                if(color[element] == color[curr])
                    return false;
			    // if adjacent node is not colored then color it with diff color and push it in queue to process it.
                if(color[element] == -1)
                {
                    color[element] = 1 - color[curr];
                    q.push(element);
                }
            }
        }
        return true;
    }
    
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
		// Making adjacency list .
        vector<vector<int>> adj(N+1);
		// putting all the edges in the adjacency list for all vertices.
        for(int i = 0; i < dislikes.size(); i++)
        {
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
    // taking a coloring vector which we will use to show if a node is colored or not (initialised by -1)
        vector<int> color(N+1, -1);
        for(int i = 1; i <= N; i++)
        {
		    // only if the node is not colored we will send this node to isBipartite fxn to color it.
            if(color[i] == -1)
            {
                if(!isBipartite(adj, N, i, color))
                    return false;
            }
        }
        return true;
    }
};
