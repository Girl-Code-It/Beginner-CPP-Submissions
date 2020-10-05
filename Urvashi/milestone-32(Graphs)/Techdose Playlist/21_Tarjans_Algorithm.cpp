/* Tarjans Algorithm..

What is Tarjans Algorithm?
=> It is used to find the strongly connected components in the graph as like Kosaraju Algorithm.

Some concepts for Tarjans Algorithm:-
1. Cross edge:- Normal edge between two vertices.
2. Back edge:- An edge between two vertices in which no one is the parent of the other.
2. Head node:- Head node is the node at which discovery and low value is same.

Time complexity:- O(V+E) as we are traversing the whole graph only once.

Steps to be followed for Tarjans Algorithm:-
1. frst we will do dfs if there is any outgoing edge for a node,
2. Then at the time when we have traversed all the outgoing edges then we will backtrack and will see if there
is any node coming in the backtracking path, then will check if that node is already present in the stack or not,
if it its present in the stack then it is a back edge otherwise it is a cross edge.
3. At last before going back from a node we will check if it is a head node, if it is a head node then we will
print the SCC through it.
4. With the traversal of every node we will increment the time.

*/

#include <bits/stdc++.h>
using namespace std;
#define V 7

// adjacency matrix.
unordered_map<int, vector<int>> adj;

void DFS(int u, vector<int> &disc, vector<int> &low, stack<int> &mystack, vector<bool> &presentInStack)
{
    static int time = 0;
    disc[u] = low[u] = time; // starting with time.
    time++;
    mystack.push(u); // pushing the nodes in the stack.
    presentInStack[u] = true; // and also making the instack value to be true.

    for (int v : adj[u])
    {
        // if a node is not traversed then there will be a back edge.
        if (disc[v] == -1)
        {
            DFS(v, disc, low, mystack, presentInStack);
            low[u] = min(low[u], low[v]);
        }

        // otherwise there will be a cross edge.
        else if (presentInStack[v])
            low[u] = min(low[u], disc[v]);
    }

    // checking for head node.
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
    // discovery array and low array with initial values as -1.
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