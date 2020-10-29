/* 
    (https://practice.geeksforgeeks.org/problems/implementing-floyd-warshall/0) 
    
    Floyd Warshall Algorithm : All pair shortest path algorithm, negative edges are allowed.
 
    Steps :
    1. Assign distance from U to V in a matrix using graph.(Distance of (U,U) is 0.)
    2. Explore all possible combination in matrix while doing V iterations.
    Time complexity:- O(V^3)
*/

#include <bits/stdc++.h>
using namespace std;

//No of vertices
#define V 6

void floyd_warshall(int graph[V][V])
{
    int dist[V][V];

    //Assign all values of graph to allPairs_SP
    for (int i = 0; i < V; ++i)
        for (int j = 0; j < V; ++j)
            dist[i][j] = graph[i][j];

    //Find all pairs shortest path by trying all possible paths.
    for (int k = 0; k < V; ++k)
    {                               
        //Try for all possible starting position.
        for (int i = 0; i < V; ++i) 
        {
            //Try for all possible ending position.
            for (int j = 0; j < V; ++j) 
            {
                //SKIP if K is unreachable from i or j 
                if (dist[i][k] == INT_MAX || dist[k][j] == INT_MAX)
                    continue;
                //Check if new distance is shorter via vertex K
                else if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
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