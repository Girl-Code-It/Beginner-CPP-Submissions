// Time Complexity - O(E*V)
// Time Complexity of Union and find operation - O(logE)

#include<bits/stdc++.h>
using namespace std;

class node
{
    int parent, rank;
};

vector<node>disjointSet;

int find(int v)
{
    if(disjointSet[v].parent == -1)
    return v;
    return disjointSet[v].parent = find(disjointSet[v]); // Optimization
}

int unionOP(int from, int to)
{
    // from = find(from);
    // to = find(to);
    // disjointSet[from] = to;

    //Union By Rank
    //Increase rank iff rank of from and to are same.
    //Which have higher rank, will become parent.

    if(disjointSet[from].rank > disjointSet[to].rank)
        disjointSet[to].parent = from;
    else if(disjointSet[from].rank < disjointSet[to].rank)
        disjointSet[from].parent = to;
    else
    {
        //Anyone can be parent
        disjointSet[from] = to;
        disjointSet[to].rank += 1;
    }
}

bool isCyclic(vector<pair<int, int> >&edgeList)
{
    for(auto p : edgeList)
    {
        // Find absolute parent
        int fromParent = find(p.first);
        int toParent = find(p.second);

        // Found a cycle
        if(fromParent == toParent)
        return true;
        
        //Build a edge
        unionOP(fromParent, toParent);
    }
    return false;
}

int main()
{
    int E, V;
    cin >> V >> E;

    disjointSet.resize(V);

    // Initially all the vertices are seperated
    for (int i = 0; i < V; i++)
    {
        disjointSet[i].parent = -1;
        disjointSet[i].rank = 0;
    }
    
    // Adjacent list
    vector<pair<int, int> >edgeList;
    for (int i = 0; i < E; i++)
    {
        int from, to;
        cin >> from >> to;
        edgeList.push_back({from, to});
    }

    return isCyclic(edgeList);
}