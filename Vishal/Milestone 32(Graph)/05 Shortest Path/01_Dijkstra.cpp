/*
    Dijkstra Algorithm : A shortest path from one node to every other node, Negative edges are not allowed.

    Steps : 
    1. Pick the minimum Vertex.
    2. Mark the vertex as preocessed.
    3. Relax the edges if cost[u] + edge_weight[u][v] < cost[v]

    TIME COMPLEXITY: O(V^2)
    TIME COMPLEXITY: (using Min-Heap + Adjacency_List): O(ElogV)
*/

#include <bits/stdc++.h>
using namespace std;

//No of vertices
#define V 6

// This function select vertex having minimum value
int selectMinVertex(vector<int> &value, vector<bool> &processed)
{
    int minimum = INT_MAX;
    int vertex;
    for (int i = 0; i < V; ++i)
    {
        // Select new vertex having minimum value and not processed yet
        if (processed[i] == false && value[i] < minimum)
        {
            vertex = i;
            minimum = value[i];
        }
    }
    // return the vertex having minimum value
    return vertex;
}

void dijkstra(int graph[V][V])
{
    // It is used for printing MST
    int parent[V];

    // It is Used for edge relaxation & finding vertex having minimum value.
    vector<int> value(V, INT_MAX);

    // Initaially No Vertex is processed
    vector<bool> processed(V, false);

    //Assuming start point as Node-0. Start node has no parent & value=0(Minimum, so that it will be processed first).
    parent[0] = -1;
    value[0] = 0;

    //Include (V-1) edges to cover all V-vertices
    for (int i = 0; i < V - 1; ++i)
    {
        //Select best Vertex by applying greedy method
        int U = selectMinVertex(value, processed);
        
        //Include new Vertex in shortest Path Graph
        processed[U] = true;

        //Relax adjacent vertices (not yet included in shortest path graph)
        for (int j = 0; j < V; ++j)
        {
            /* 3 conditions to relax:-
			      1.Edge is present from U to j.
			      2.Vertex j is not included in shortest path graph
			      3.Edge weight is smaller than current edge weight
			*/
            if (graph[U][j] != 0 && processed[j] == false && value[U] != INT_MAX && (value[U] + graph[U][j] < value[j]))
            {
                value[j] = value[U] + graph[U][j];
                parent[j] = U;
            }
        }
    }
}

int main()
{
    int graph[V][V] = {{0, 1, 4, 0, 0, 0},
                       {1, 0, 4, 2, 7, 0},
                       {4, 4, 0, 3, 5, 0},
                       {0, 2, 3, 0, 4, 6},
                       {0, 7, 5, 4, 0, 7},
                       {0, 0, 0, 6, 7, 0}};

    dijkstra(graph);
    return 0;
}