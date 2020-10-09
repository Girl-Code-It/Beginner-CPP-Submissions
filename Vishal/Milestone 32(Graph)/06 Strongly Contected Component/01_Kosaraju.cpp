/* 
    (https://practice.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1)
 
    Kosaraju Algorithm : used to find the strongly connected components in a graph.
    Strongly connected components are the parts of graph in which there is path from every node to every other node.
    Transpose of a graph is a graph having all reversly directed edges.

    Property Used : Transpose of a graph doesnt lose its type. Means if it is SCC, then it will remain SCC and vioce-versa.

    Steps :
    1. Do a DFS and store vertex in a stack after every dfs calls.
    2. Transpose a graph.
    3. Again do a DFS, now where the dfs break, print SCC.

    Time compexity:- O(V + E) (3 Traversals are required)
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
        if(!visited[j])
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
        if(!visited[curr])
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