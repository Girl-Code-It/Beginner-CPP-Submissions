/* (https://practice.geeksforgeeks.org/problems/euler-circuit-and-path/1) 

Euler's Theorem..

Some concepts:-
1. Walk:- Walk means travelling the graph by visiting all the node any no of times.
2. Trail:- Trail means every edge should be traversed only once, means we can reach a node more than once using
any other edge but no edge should be repeated.

What is Euler's theorem?
=> It is used to find if there is a euler path cycle in the graph.

what is Euler path cycle?
=> A Euler path is the path in which ywo conditions are followed.
1. We can traverse all the edges of the graph exactly once.
2. Starting node and ending node should be equal.

What is Semi-Eulerian path?
=> Semi eulerian path should also cover all the edges in it only once but the starting and ending point 
should be different.

Time complexity:- O(V+E)

Steps to be followed:-
1. If we want every single edge exactly once to be traversed in our graph then what we can do we can check that
if a graph is multicomponent(means it is divided or breaked into more than one parts) then all the edges should
be present in any of the one component of the graph and the other components should have only one node because
more than one node forms an edge.

2. Now, in Semi-Eulerian path there should be exacly two nodes having odd no of edges one is starting node and
other is ending node. But why? because except start and end node all the nodes will follow eulerian path means
path will start from that node and will end at that node so we will have even nodes.

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
    int node = -1; //Node to start DFS
    for (int i = 0; i < V; ++i)
        if (adj[i].size() > 0)
        {
            node = i; //Found a node to start DFS
            break;
        }
    if (node == -1)  //No start node was found-->No edges are present in graph
        return true; //It's always Eulerian

    DFS(node, visited);
    //Check if all the non-zero vertices are visited
    for (int i = 0; i < V; ++i)
        if (visited[i] == false and adj[i].size() > 0)
            return false; //We have edges in multi-component
    return true;
}

int find_Euler()
{
    if (!Connected_Graph()) // multi-component edged graph
        return 0;           //All non-zero degree vertices should be connected

    //Count odd-degree vertices
    int odd = 0;
    for (int i = 0; i < V; ++i)
        if (adj[i].size() & 1)
            odd += 1;

    if (odd > 2) //Only start and end node can have odd degree
        return 0;

    return (odd == 0) ? 2 : 1; //1->Semi-Eulerian...2->Eulerian
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
