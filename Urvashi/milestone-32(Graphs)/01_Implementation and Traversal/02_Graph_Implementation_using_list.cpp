#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;

    // making a adjacency list to store the vertices and edges.
    list<int> *adjList;

    public:
    // constructor.
    Graph(int v){
        V = v;
        adjList = new list<int>[V]; // adjacency lists for every edge.
    }

    void addEdge(int u, int v, bool bidir=true)
    {
        // storing the next neighbours of all the vertices in adjacency list.
        adjList[u].push_back(v);
        // and if the list is bidrectional then there will be both directions for the edges.
        if(bidir)
        {
            adjList[v].push_back(u);
        }
    }

    void PrintAdjList(){
        for(int i = 0; i < V; i++)
        {
            cout << i << "->";
            // for each vertice , we will print its adjacency list.
            for(int node:adjList[i])
            {
                cout << node << ",";
            }
            cout << endl;
        }
    }
};

int main()
{
    // making object of Graph class.
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(1, 3);
    g.addEdge(3, 2);

    g.PrintAdjList();

    return 0;
}