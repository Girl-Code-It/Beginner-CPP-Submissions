/* Floyd Warshall Algorithm..
 
What is Floyd Warshall Algorithm?
=> It is "All pair shortest path algorithm". This means this algorithm is used to find shortest path from all
the paths joining two vertices.

Time complexity:- O(V^3) as we will try all the V paths by including and excluding kth node and we will do this
for all the vertices means we wil take all the vertices as starting and ending position.

Steps to be followed:-
1. We will compare current shortest path with some another path including some kth node between src and dst node
and we will choose minimum out of both.

*/

#include <bits/stdc++.h>
using namespace std;

#define V 6 //No of vertices

void floyd_warshall(int graph[V][V])
{
    int dist[V][V];

    //Assign all values of graph to allPairs_SP
    for (int i = 0; i < V; ++i)
        for (int j = 0; j < V; ++j)
            dist[i][j] = graph[i][j];

    //Find all pairs shortest path by trying all possible paths
    for (int k = 0; k < V; ++k)         //Try all intermediate nodes by including and excluding them in path.
        for (int i = 0; i < V; ++i)     //Try for all possible starting position.
            for (int j = 0; j < V; ++j) //Try for all possible ending position.
            {
                //SKIP if K is unreachable from i or j is unreachable from k
                if (dist[i][k] == INT_MAX || dist[k][j] == INT_MAX)
                    continue;
                //Check if new distance is shorter via vertex K
                else if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }

    //Check for negative edge weight cycle
    for (int i = 0; i < V; ++i)
        if (dist[i][i] < 0)
        {
            cout << "Negative edge weight cycle is present\n";
            return;
        }

    //Print Shortest Path Graph
    //(Values printed as INT_MAX defines there is no path)
    for (int i = 1; i < V; ++i)
    {
        for (int j = 0; j < V; ++j)
            cout << i << " to " << j << " distance is " << dist[i][j] << "\n";
        cout << "=================================\n";
    }
}

int main()
{
    int graph[V][V] = {{0, 1, 4, INT_MAX, INT_MAX, INT_MAX},
                       {INT_MAX, 0, 4, 2, 7, INT_MAX},
                       {INT_MAX, INT_MAX, 0, 3, 4, INT_MAX},
                       {INT_MAX, INT_MAX, INT_MAX, 0, INT_MAX, 4},
                       {INT_MAX, INT_MAX, INT_MAX, 3, 0, INT_MAX},
                       {INT_MAX, INT_MAX, INT_MAX, INT_MAX, 5, 0}};

    floyd_warshall(graph);
    return 0;
}