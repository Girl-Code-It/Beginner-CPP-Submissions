// Time Complexity - O(E*V)
// Time Complexity of Union and find operation - O(E)

#include<bits/stdc++.h>
using namespace std;
vector<int>disjointSet;

int find(int v)
{
    if(disjointSet[v] == -1)
    return v;
    return find(disjointSet[v]);
}

int unionOP(int from, int to)
{
    from = find(from);
    to = find(to);
    disjointSet[from] = to;
}

bool isCyclic(vector<pair<int, int> >&edgeList)
{
    for(auto p : edgeList)
    {
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

    disjointSet.resize(V, -1);
    vector<pair<int, int> >edgeList;
    for (int i = 0; i < E; i++)
    {
        int from, to;
        cin >> from >> to;
        edgeList.push_back({from, to});
    }

    return isCyclic(edgeList);
}