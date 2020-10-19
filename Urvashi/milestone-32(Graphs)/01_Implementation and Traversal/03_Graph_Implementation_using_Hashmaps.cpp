#include<bits/stdc++.h>
using namespace std;

// making a generic template so that we can use int, char , string etc data types.
template<typename T>
class Graph{
    // making a map of vertices and their corresponding adjacency lists.
    map<T, list<T> >adjList;

    public:
    Graph(){

    }

    void addEdge(T u, T v, bool bidir=true)
    {
        // putting neighbours of every vertice in their adjacency lists. 
        adjList[u].push_back(v);
        // and if the list is bidrectional then there will be both directions for the edges.
        if(bidir)
        {
            adjList[v].push_back(u);
        }
    }

    void PrintAdjList(){
        // for each vertice.
        for(auto row:adjList)
        {
            // row.first is the vertice and row.second contains its adjacency list.
            T key = row.first;
            cout << key << "->";

            // printing every element of adjacency list of every vertice.
            for(T element:row.second)
            {
                cout << element << ",";
            }
            cout << endl;
        }
    }
};
int main(){
    // object of Graph class of type string.
    Graph<string> g;
    g.addEdge("Amritsar", "Delhi");
    g.addEdge("Amritsar", "Jaipur");
    g.addEdge("Delhi", "Siachen");
    g.addEdge("Delhi", "Bangalore");
    g.addEdge("Delhi", "Agra");
    g.addEdge("Amritsar", "Siachen");

    g.PrintAdjList();


}