#include <iostream>
#include <unordered_map>
#include<list>
#include<cstring>
using namespace std;

// Template for generic graph
template <typename T>
class Graph
{
    unordered_map<T, list<T> > adjList;

public:
    Graph() {
    }

    // Assuming Bidiredctional Graph
    void addEdge(T u, T v, bool bidir = true)
    {
        adjList[u].push_back(v);
        if (bidir)
        {
            adjList[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto row : adjList)
        {
            // row.first = key of map & row.second = list
            cout << row.first ;

            for (auto x : row.second)
            {
                cout << "-> " << x;
            }
            cout << "\n";
        }
    }
};

int main()
{
    Graph<string> g;
    g.addEdge("Amritsar", "Delhi");
    g.addEdge("Amritsar", "Jaipur");
    g.addEdge("Delhi", "Siachen");
    g.addEdge("Delhi", "Banglore");
    g.addEdge("Delhi", "Agra");

    g.printAdjList();
    return 0;
}