/* (https://practice.geeksforgeeks.org/problems/negative-weight-cycle/0) 

Bellman Ford Algorithm...

What is Bellman Ford Algorithm?
=> It is also the shortest path algorithm like dijkstra algorithm. It is used to find the shortest path
from source to destination node including all the vertices using V-1 edges.

Similarity between dijkstra and bellman ford algorthm is:-
=> They both will not work in case of negative edge weight cycle in the graph.

Difference between dijkstra and bellman ford are:-
1. time complexity for dijkstra is ElogV but for bellman ford is V*E as we will do relaxing V times for E edges.
2. Dikstra algorithm can't tell us that there is a negative edge cycle in graph but bellman ford will tell it.

If after doing Vth no of relaxing we will get any change in any of the vertice then there exits negative edge
cycle.

*/

#include <bits/stdc++.h>
using namespace std;

struct edge
{
    // source, destination and weight of the nodes.
    int src, dst, wt;
};

int V, E;

void BellmanFord(vector<edge> &Edges)
{
    // parent array to store parents of every node.
    int parent[V];

    // cost of the edge from parent and the V vertice.
    int cost_parent[V];

    // value array to store the minimum path cost for every node.
    vector<int> value(V, INT_MAX);

    parent[0] = -1; // 0 is its parent itself as we are starting with it.
    value[0] = 0;   // value for 0th node is set as 0 so that it will be selected first.

    bool updated; // updated variable will take care, if relaxing happened to the current vertice or not.

    // doing relaxing for V-1 times for E edges.
    for (int i = 0; i < V - 1; i++)
    {
        // firstly all the vertices will have cost as infinity so they will be unupdated.
        updated = false;

        for (int j = 0; i < E; j++)
        {
            int U = Edges[j].src; // source
            int V = Edges[j].dst; // destination
            int wt = Edges[j].wt; // weight of edge between source and destination

            // checking for the condition for relaxing.
            /* firstly try to understand what is relaxing ?
            =>  Relaxing means updating the minimum cost to include a vertice in our graph if we find 
            a better path of less cost.

            So, conditions for relaxing will be:-
            1. cost should not be infinity.
            2. And we will do relaxing only if we get a edge with lesser cost.

            */
            if (value[U] != INT_MAX and value[U] + wt < value[V])
            {
                value[V] = value[U] + wt;  // updating the cost.
                parent[V] = U;             // updating the new parent of the node as by relaxing the parent will be changed.
                cost_parent[V] = value[V]; // updating the cost array also.
                updated = true;            // as we did the relaxing so make the updated variable as true.
            }
        }
        // if after 1 iterations of relaxing there was no updation found then just break out of loop
        // we don't have to do more round of relaxtions they are of no use
        if (updated == false)
            break;
    }

    // doing relaxation one more time Vth time just for checking the negative edge cycle
    // as if there is any change found in the Vth relaxation there will be -ve edge cycle but we will ony check
    // Vth time if there was updation in every V-1 relaxations.
    for (int j = 0; j < E and updated == true; j++)
    {
        int U = Edges[j].src;
        int V = Edges[j].dst;
        int wt = Edges[j].wt;

        if (value[U] != INT_MAX and value[U] + wt < value[V])
        {
            cout << "Graph has -VE edge cycle\n";
            return;
        }
    }

    for (int i = 1; i < V; i++)
    {
        cout << "U->V: " << parent[i] << "->" << i << " cost to reach " << parent[i] << "from source 0 = " << value[i] << "\n";
    }
}

int main()
{
    cin >> V >> E;
    vector<edge> Edges(E);

    int src, dst, wt;

    for (int i = 0; i < E; i++)
    {
        cin >> src >> dst >> wt;
        Edges[i].src = src;
        Edges[i].dst = dst;
        Edges[i].wt = wt;
    }

    BellmanFord(Edges);
    return 0;
}