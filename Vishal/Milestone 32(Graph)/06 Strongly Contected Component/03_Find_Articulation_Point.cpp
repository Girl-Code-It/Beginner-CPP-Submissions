/* 
    Articulation Point : A node is called articulation point if after removing that node and its associated edges,
    we will get more components than earlier.

    We will do simple Tarjans algorithms with two extra cases, which are :
    1. If a node is root node and it have more than one child.
    2. If a node is not a root node and it have atleast one component which do not have any back edge to the root.

    Time complexity:- O(V+E)
*/

#include <bits/stdc++.h>
using namespace std;
#define V 5
#define pb push_back

unordered_map<int, vector<int>> adj;

void DFS(int u, vector<int> &disc, vector<int> &low, vector<int> &parent, vector<bool> &articulation_Point)
{
    static int time = 0;
    disc[u] = low[u] = time;
    time += 1;
    int children = 0;

    for (int v : adj[u])
    {
        if (disc[v] == -1) 
        {
            children += 1;
            parent[v] = u;
            DFS(v, disc, low, parent, articulation_Point);
            low[u] = min(low[u], low[v]);

            //Case-1: U is root
            if (parent[u] == -1 and children > 1) 
                articulation_Point[u] = true;

            //Case-2: Atleast 1 component will get separated
            if (parent[u] != -1 and low[v] >= disc[u]) 
                articulation_Point[u] = true;
        }
        //Ignore child to parent edge
        else if (v != parent[u]) 
            low[u] = min(low[u], disc[v]);
    }
}

void findAPs_Tarjan()
{
    vector<int> disc(V, -1), low(V, -1), parent(V, -1);
    vector<bool> articulation_Point(V, false); //Avoids cross-edge

    for (int i = 0; i < V; ++i)
        if (disc[i] == -1)
            DFS(i, disc, low, parent, articulation_Point);

    cout << "Articulation Points are: ";
    for (int i = 0; i < V; ++i)
        if (articulation_Point[i])
            cout << i << " ";
}

int main()
{
    adj[0].pb(2);
    adj[2].pb(0);
    adj[0].pb(3);
    adj[3].pb(0);
    adj[1].pb(0);
    adj[0].pb(1);
    adj[2].pb(1);
    //adj[2].pb(4);
    //adj[4].pb(2);
    adj[1].pb(2);
    adj[3].pb(4);
    adj[4].pb(3);

    findAPs_Tarjan();
    return 0;
}