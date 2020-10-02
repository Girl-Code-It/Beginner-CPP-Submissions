/* Disjoint set...

Time complexity:- O(E+V) where E is the no of edges and V is the no of vertices.

In this implementation we are doing it using an array thats why its O(n) we can also do it using binary tree in O(logn).

*/

#include <bits/stdc++.h>
using namespace std;

struct node{
    int Parent; // we will store absolute parent of every node.
    int rank; // rank is height of the tree but it will not decrease as height decrease , it will increase with height.
}

// vector whose indexes will show the values of the nodes and whose values will show the parent of the current node.
vector <node>parent;

// find fxn to find the absolute root node or absolute parent of the given node.
int find(int v)
{
    // if parent of the passed node is -1 means its itself the absolute root, so we will return it.
    if (parent[v].Parent == -1)
        return v;
    // otherwise we will recursively find the absolute root and we will store the ans so that we dont have to process it again.
    return parent[v].Parent = find(parent[v]);
}

// union fxn is to find the union of two nodes which are given to us as a pair.
void Union(int fromP, int toP)
{
    // the set which will have lesser rank we will make other set's absolute root its root also.

    if(parent[fromP].rank > parent[toP].rank)
    parent[toP].Parent = fromP;
    
    else if(parent[fromP].rank < parent[toP].rank)
    parent[fromP].Parent = toP;

    else
    {
        // in case both set have same rank, rank will increamented by 1 by making any of the one as parent.
        parent[fromP].Parent = toP;
        parent[toP].rank++ ;
    }
    
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

        // if absolute parent of both nodes is same that means there is a path between both nodes which mens there is a cycle.
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

    // marking all the vertices as a seperate set (disjoint set) with only one vertice and because of only one vertice there will be no
    // absolute root so we will fill -1 in place of absolute root value.
    parent.resize(V);
    for(int i = 0; i < V; i++)
    {
        parent[i].Parent = -1 ;
        parent[i].rank = 0; // initially rank will be 0 for all.
    }

    // pair of vertices in which we will perform find, union and iscyclic fxn.
    vector<pair<int, int>> edge_list;

    for (int i = 0; i < E; i++)
    {
        // as we can apply disjoint set union in only undirected graph because union doen't take care of direction
        //  but for the sake of simplicity we are taking vertices as from and to.
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

