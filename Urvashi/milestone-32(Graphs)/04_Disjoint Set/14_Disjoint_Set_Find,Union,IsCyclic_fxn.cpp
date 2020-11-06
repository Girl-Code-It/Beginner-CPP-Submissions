/* (https://practice.geeksforgeeks.org/problems/disjoint-set-union-find/1)

Disjoint set...

Time complexity:- O(E+V) where E is the no of edges and V is the no of vertices.

In this implementation we are doing it using an array thats why its O(n) we can also do it using binary tree in O(logn).

*/

#include <bits/stdc++.h>
using namespace std;

// vector whose indexes will show the values of the nodes and whose values will show the parent of the current node.
vector<int> parent;

// find fxn to find the root node or absolute parent of the given node.
int find(int v)
{
    // if parent of the passed node is -1 means its itself the absolute root, so we will return it.
    if (parent[v] == -1)
        return v;
    return find(parent[v]); // otherwise we will recursively find the absolute root.
}

// union fxn is to find the union of two nodes which are given to us as a pair.
void Union(int fromP, int toP)
{
    // we will find absolute root of both the nodes.
    fromP = find(fromP);
    toP = find(toP);

    // and will connect the absolute roots of both nodes and we will get the union of both sets.
    parent[fromP] = toP;
}

// isCyclic fxn is used to find if there exits a cycle between the nodes present in the pair we are given.
bool isCyclic(vector<pair<int, int>> &edge_list)
{
    // for every pair present in edge list.
    for (auto p : edge_list)
    {
        // we will find the absolute parents of both the nodes.
        int fromP = find(p.first);
        int toP = find(p.second);

        // if absolute parent of both nodes is same that means there is a path between both nodes which means we
        // can't perform union otherwise it will form a cycle.
        if (fromP == toP)
            return true;

        // if parents are not same then simply take union to make parents same.
        Union(fromP, toP);
    }
    return false;
}

int main()
{
    int E, V; // denotes no of edges and vertices.
    cin >> E >> V;

    // marking all the vertices as a seperate set (disjoint set) with only one vertice and because of only one vertice there will be no absolute root so we will fill -1 in place of absolute root value.
    parent.resize(V, -1);

    // pair of vertices in which we will perform find, union and iscyclic fxn.
    vector<pair<int, int>> edge_list;

    for (int i = 0; i < E; i++)
    {
        int from, to;
        cin >> from >> to;
        edge_list.push_back({from, to});
    }

    if (isCyclic(edge_list))
        cout << "TRUE\n";
    else
        cout << "FALSE\n";

    return 0;
}
