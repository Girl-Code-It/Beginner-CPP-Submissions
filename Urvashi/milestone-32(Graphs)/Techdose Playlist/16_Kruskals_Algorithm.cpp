/* (https://practice.geeksforgeeks.org/problems/minimum-spanning-tree/1) 

Kruskals Algorithm

What is Kruskals Algorithm?
=> Kruskals Algorithm is used to make MST.
Steps to be followed are:-
1. Sort all the edges in ascending order.
2. (i) Pick the smallest edge.
   (ii) Check if the new edge forms a cycle in our graph.
   (iii)  If it is forming cycle so we will not include that edge even if it is the smallest between all otherwise we will include it.
3. Repeat 1 and 2 steps unless we include all the V-1 edges in the MST.

Time complexity:- O(ElogE + ElogV), ElogE is to sort all E edges and ElogV for processing all the E edges in worst cases.

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
    int src; // source
    int dst; // destination
    int wt;  // weight of each edge.
};

vector<node> dsuf;
vector<Edge> mst;

int find(int v)
{
    // if -1 is present as the parent then it is absolute root itself so we will return it.
    if (dsuf[v].parent == -1)
        return v;
    // otherwise we will recursively find the absolute root and we will store the ans so that we dont have to process it again.
    return dsuf[v].parent = find(dsuf[v].parent);
}

void union_op(int fromP, int toP)
{
    // the set which will have lesser rank we will make other set's absolute root its root also.

    if (dsuf[fromP].rank > dsuf[toP].rank)
        dsuf[toP].parent = fromP;

    else if (dsuf[fromP].rank < dsuf[toP].rank)
        dsuf[fromP].parent = toP;

    else
    {
        // in case both set have same rank, rank will incremented by 1 by making any of the one as parent.
        dsuf[fromP].parent = toP;
        dsuf[toP].rank++;
    }
}

bool comparator(Edge a, Edge b)
{
    // to sort in ascending order.
    return a.wt < b.wt;
}

void printEdgeList(vector<Edge> &edge_list)
{
    for (auto p : edge_list)
        cout << "src: " << p.src << " dst: " << p.dst << " wt: " << p.wt << "\n";
}

void kruskals(vector<Edge> &edge_list, int V, int E)
{
    // first sorting the edges in ascending order.
    sort(edge_list.begin(), edge_list.end(), comparator);

    int i = 0, j = 0;
    while (i < V - 1 && j < E)
    {
        // finding absolute root of src and destination node.
        int fromP = find(edge_list[j].src);
        int toP = find(edge_list[j].dst);

        // if root is same then we can't join the source and destination because it will form cycle.
        if (fromP == toP)
        {
            ++j;
            continue;
        }

        // otherwise we will join them using union fxn.
        union_op(fromP, toP);
        // and also we will push it in the mst array .
        mst.push_back(edge_list[j]);
        ++i;
    }
}

void printMST(vector<Edge> &mst)
{
    cout << "MST formed is\n";
    for (auto p : mst)
    {
        cout << "src: " << p.src << " dst: " << p.dst << " wt: " << p.wt << "\n";
    }
}

int main()
{
    int E, V; // denotes no of edges and vertices.
    cin >> E >> V;

    dsuf.resize(V);

    // marking all the vertices as a seperate set (disjoint set) with only one vertice and because of only one vertice there will be no
    // absolute root so we will fill -1 in place of absolute root value.

    for (int i = 0; i < E; i++)
    {
        dsuf[i].parent = -1;
        dsuf[i].rank = 0; // initially rank will be 0 for all.
    }

    vector<Edge> edge_list;
    Edge temp;

    // pushing src dst with their weights in edge list.
    for (int i = 0; i < E; i++)
    {
        int from, to, wt;
        cin >> from >> to >> wt;
        temp.src = from;
        temp.dst = to;
        temp.wt = wt;
        edge_list.push_back(temp);
    }

    kruskals(edge_list, V, E);
    printMST(mst);

    return 0;
}