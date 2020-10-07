// Disjoint set

// Time Complexity - O(V*log(E))
// Time Complexity of Union and find operation - O(logE)

#include<bits/stdc++.h>
using namespace std;

class node
{
    int parent, rank;
};

vector<node>disjointSet;

// Optimize Path Compression
int find(int v)
{
    // It means it is parent of itself
    if(disjointSet[v].parent == -1)
    return v;
    return disjointSet[v].parent = find(disjointSet[v]); 
}

// Union By Rank
int unionOP(int from, int to)
{
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

        // If they have same absolute parent, it means they already have a path
        // Hence we got a cycle.
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
    
    // Adjacency list
    vector<pair<int, int> >edgeList;
    for (int i = 0; i < E; i++)
    {
        int from, to;
        cin >> from >> to;
        edgeList.push_back({from, to});
    }

    return isCyclic(edgeList);
}