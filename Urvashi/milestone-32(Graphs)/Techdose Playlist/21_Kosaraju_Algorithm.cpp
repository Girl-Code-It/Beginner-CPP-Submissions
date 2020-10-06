/* (https://practice.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1)

 Kosaraju Algorithm..

What is Kosaraju Algorithm?
=> It is used to find the strongly connected components in a graph.
Strongly connected components are the parts of graph in which there is path from every node to every other node.

Time compexity:- O(v^3)

Steps to be followed:-
1. Fistly we will do dfs of the graph and will store it in a stack.
2. Then we will reverse every single connection's direction means if connection was U->V then we will make it 
V->U. Reversing the direction of edge directions for the whole graph is called its transpose.
3. Now, we will use the property of the SCC that is transpose of SCC is equal to SCC. So, after taking the 
transpose we will travserse the graph again using DFS2 and will see the portions where DFS work correctly .
So, all those portions are called SCCs and where the DFS break it means we have to restart our DFS.

*/

#include<bits/stdc++.h>
using namespace std;

#define V 8

unordered_map<int, vector<int>> adj, rev;

void DFS1(int i, vector<bool> &visited, stack<int> &mystack)
{
    // traversing every node and pushing it into stack and making visited as true.
    visited[i] = true;
    for(int j: adj[i])
    {
        if(visited[j] == false)
        DFS1(j, visited, mystack);
    }
    mystack.push(i);
}

void reverse()
{
    // reversing the links.
    for(int i = 0; i < V; i++)
    {
        for(int j: adj[i])
        rev[j].push_back(i);
    }
}

void DFS2(int i, vector<bool> &visited)
{
    // priting the node and making visited true for it.
    cout << i << " ";
    visited[i] = true;

    // and traversing all the nodes.
    for(int j: rev[i])
    {
        if(!visited[j])
        DFS2(j, visited);
    }
}

void findSCCs()
{
    // stack to push the nodes after DFS.
    stack<int> mystack;

    // initially all the nodes are unvisited.
    vector<bool> visited(V, false);

    // For all V nodes.
    for(int i = 0; i < V; i++)
    {
        //Step1:- If the node is unvisiteed then we will visit it and push it into the stack.
        if(!visited[i])
        DFS1(i, visited, mystack);
    }

    // Step2:- reversing direction of all the edges.
    reverse();

    // marking the visited array as false for the DFS2.
    for(int i = 0; i < V; i++)
    visited[i] = false;

    cout << "Strongly connected components are:\n";

    // once again traversing the array and printing all the SCCs.
    while(!mystack.empty())
    {
        int curr = mystack.top();
        mystack.pop();
        if(visited[curr] == false)
        {
            DFS2(curr, visited);
            cout << "\n";
        }
    }
}
int main()
{
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(0);
    adj[2].push_back(3);
    adj[3].push_back(4);
    adj[4].push_back(5);
    adj[4].push_back(7);
    adj[5].push_back(6);
    adj[6].push_back(4);
    adj[6].push_back(7);

    findSCCs();
    return 0;
}