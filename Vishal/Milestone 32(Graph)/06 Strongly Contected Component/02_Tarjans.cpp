/* 
    (https://practice.geeksforgeeks.org/problems/strongly-connected-component-tarjanss-algo/0) 

    Tarjans Algorithm : used to find the strongly connected components in a graph.

    Some concepts for Tarjans Algorithm :
    1. Back edge:- An edge from descendent to ancestor, where ancestor is not direct parent.
    2. Head node:- Head node is a node which have same discovery and low value.

    Steps :
    1. We will do a DFS, and compute low and discovery value for each node.
    2. Before return from DFS call, check if it a head node then print SCC,

    Time complexity:- O(V+E) (1 Traversal is required).
*/

#include <bits/stdc++.h>
using namespace std;
#define V 7

// adjacency List
unordered_map<int, vector<int>> adj;

void DFS(int u, vector<int> &disc, vector<int> &low, stack<int> &mystack, vector<bool> &presentInStack)
{
    // starting with time. It is static so that doesnt lose its value during DFS calls.
    static int time = 0;
    disc[u] = low[u] = time;
    time++;

    // pushing the nodes in the stack and also mark as true in presentInstack.
    mystack.push(u);
    presentInStack[u] = true;

    for (int v : adj[u])
    {
        // if a node is not traversed
        if (disc[v] == -1)
        {
            DFS(v, disc, low, mystack, presentInStack);
            low[u] = min(low[u], low[v]);
        }

        // Else, there will be a cross edge or back edge.
        // if it is present in stack then it is back edge, otherwise it is cross edge.
        else if (presentInStack[v])
            low[u] = min(low[u], disc[v]);
    }

    // If it is head node then Print SCC.
    if (low[u] == disc[u])
    {
        cout << "SCC is: ";
        while (mystack.top() != u)
        {
            cout << mystack.top() << " ";
            presentInStack[mystack.top()] = false;
            mystack.pop();
        }
        cout << mystack.top() << "\n";
        presentInStack[mystack.top()] = false;
        mystack.pop();
    }
}

void findSCCs_Tarjan()
{
    // Initialize with -1 to show it is unvisited.
    vector<int> disc(V, -1), low(V, -1);

    // presentInStack will show if a node is present in the stack or not.
    vector<bool> presentInStack(V, false);

    // stack to push all the processed nodes.
    stack<int> mystack;

    for (int i = 0; i < V; i++)
    {
        // if a node is not traversed then traverse it.
        if (disc[i] == -1)
            DFS(i, disc, low, mystack, presentInStack);
    }
}

int main()
{
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[3].push_back(4);
    adj[4].push_back(0);
    adj[4].push_back(5);
    adj[4].push_back(6);
    adj[5].push_back(6);
    adj[6].push_back(5);

    findSCCs_Tarjan();
    return 0;
}