/*
    https://practice.geeksforgeeks.org/problems/minimum-spanning-tree/1

    Kruskals Algorithm :

    Steps :
    1 Sort edges in ascending order of their weight
    2. Pick smallest edges, check if oit is forming cycle or not:
        2. a) if it forms, skip that edge.
        2. b) otherwise,  add this edge to mst.
    3. Repeat step 1 & 2 unit mst contain V-1 edges.

    TIME COMPLEXITY: O(ElogE + ElogV)
    ElogE for sorting E edges in edge_list
    ElogV for applying FIND & UNION operations on E edges having V vertices
*/

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int parent;
    int rank;
};
struct Edge
{
    int src;
    int dst;
    int wt;
};

vector<node> disjointSet;
vector<Edge> mst;

//FIND operation
int find(int v)
{
    // It mean it is absolute parent of itself. 
    if (disjointSet[v].parent == -1)
        return v;
    return disjointSet[v].parent = find(disjointSet[v].parent); //Path Compression
}

void union_op(int fromP, int toP)
{
    //UNION by RANK
    if (disjointSet[fromP].rank > disjointSet[toP].rank) //fromP has higher rank
        disjointSet[toP].parent = fromP;
    else if (disjointSet[fromP].rank < disjointSet[toP].rank) //toP has higher rank
        disjointSet[fromP].parent = toP;
    else
    {
        //Both have same rank and so anyone can be made as parent
        disjointSet[fromP].parent = toP;
        disjointSet[toP].rank += 1; //Increase rank of parent
    }
}

// Sort edges in ascending order of their weight
bool comparator(Edge a, Edge b)
{
    return a.wt < b.wt;
}

void Kruskals(vector<Edge> &edge_List, int V, int E)
{
    // Steps 1 : Sorting according edge weight
    sort(edge_List.begin(), edge_List.end(), comparator);

    int i = 0, j = 0;
    while (i < V - 1 && j < E)
    {
        //FIND absolute parent of subset
        int fromP = find(edge_List[j].src); 
        int toP = find(edge_List[j].dst);

        // If they have same absolute parent, it means they are in same set.
        if (fromP == toP)
        {
            // Increase edge count, and skip union operation
            ++j;
            continue;
        }

        // Else, Join two disjoin set using Union Operation
        union_op(fromP, toP);

        // As jth edge is processed, add it to MST.
        mst.push_back(edge_List[j]);
        ++i;
    }
}
//Display the formed MST
void printMST(vector<Edge> &mst)
{
    cout << "MST formed is\n";
    for (auto p : mst)
        cout << "src: " << p.src << "  dst: " << p.dst << "  wt: " << p.wt << "\n";
}

int main()
{
    int E; //No of edges
    int V; //No of vertices (0 to V-1)
    cin >> E >> V;

    disjointSet.resize(V);      //Mark all vertices as separate subsets with only 1 element
    for (int i = 0; i < V; ++i) //Mark all nodes as independent set
    {
        disjointSet[i].parent = -1;
        disjointSet[i].rank = 0;
    }

    vector<Edge> edge_List; //Adjacency list
    Edge temp;
    for (int i = 0; i < E; ++i)
    {
        int from, to, wt;
        cin >> from >> to >> wt;
        temp.src = from;
        temp.dst = to;
        temp.wt = wt;
        edge_List.push_back(temp);
    }

    Kruskals(edge_List, V, E);
    printMST(mst);

    return 0;
}