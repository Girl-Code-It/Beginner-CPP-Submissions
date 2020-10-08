/* (https://practice.geeksforgeeks.org/problems/euler-circuit-and-path/1) 

    Trail : It means every edge should be traversed only once, means we can reach a node more than once using
    any other edge but no edge should be repeated.

    Euler's theorem : used to find if there is a Euler path cycle(Euler circuit) in the graph.

    Euler path cycle : A cycle(Same starting & Ending point), in which we have to traverse all edges excatly once.

    Semi-Eulerian path : A traversal of graph where all edges are traversed excatly once.(Different starting & ending point)
    
    Steps :
    1. If we want every single edge exactly once to be traversed in our graph then what we can do we can check that
    if a graph is multicomponent(means it is divided or breaked into more than one parts) then all the edges should
    be present in any of the one component of the graph and the other components should have only one node because
    more than one node forms an edge.
    2. Now, in Semi-Eulerian path there should be exacly two nodes having odd no of edges one is starting node and
    other is ending node. But why? because except start and end node all the nodes will follow eulerian path means
    path will start from that node and will end at that node so they will have even nodes.
    
    Time complexity:- O(V+E)
*/

#include <bits/stdc++.h>
using namespace std;
#define V 5
#define pb push_back

unordered_map<int, vector<int>> adj;

void DFS(int curr, vector<bool> &visited)
{
    visited[curr] = true;
    for (auto it : adj[curr])
    {
        if (!visited[it])
            DFS(it, visited);
    }
}

bool Connected_Graph()
{
    vector<bool> visited(V + 1, false);

    //Node to start DFS
    int node = -1;
    for (int i = 0; i < V; ++i)
    {
        //Found a node to start DFS
        if (adj[i].size() > 0)
        {
            node = i; 
            break;
        }
    }

    //No start node was found, means No edges are present in graph.Hence It's a Eulerian Graph.
    if (node == -1)  
        return true; 

    DFS(node, visited);

    //Check if all the non-zero vertices are visited
    for (int i = 0; i < V; ++i)
    {
        //We have edges in multi-component
        if (visited[i] == false and adj[i].size() > 0)
            return false; 
    }

    return true;
}

int find_Euler()
{
    // multi-component edged graph, All non-zero degree vertices should be connected
    if (!Connected_Graph()) 
        return 0;           

    //Count odd-degree vertices
    int odd = 0;
    for (int i = 0; i < V; ++i)
        if (adj[i].size() & 1)
            odd += 1;

    //Only start and end node can have odd degree otherwise it will be non-eulerian
    if (odd > 2) 
        return 0;

    //1->Semi-Eulerian...2->Eulerian
    return (odd == 0) ? 2 : 1; 
}

void findEuler_Path_Cycle()
{
    int ret = find_Euler();
    if (ret == 0)
        cout << "Graph is NOT a Euler graph\n";
    else if (ret == 1)
        cout << "Graph is Semi-Eulerian\n";
    else
        cout << "Graph is Eulerian (Euler circuit)\n";
}

int main()
{
    adj[0].pb(1);
    adj[1].pb(0);
    adj[0].pb(2);
    adj[2].pb(0);
    adj[2].pb(1);
    adj[1].pb(2);
    adj[0].pb(3);
    adj[3].pb(0);
    adj[3].pb(4);
    adj[4].pb(3);
    findEuler_Path_Cycle();

    return 0;
}