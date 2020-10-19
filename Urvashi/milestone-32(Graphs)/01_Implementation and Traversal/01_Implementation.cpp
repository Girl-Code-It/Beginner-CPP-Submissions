/* https://practice.geeksforgeeks.org/problems/print-adjacency-list/0

 Adjacency List Implementation

 Time Complexity : O(E),  Space Complexity : O(V + E)
 
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, vertices, edges, u, v;
    cin >> t;

    while(t--)
    {
        cin >> vertices >> edges;

        // This is static array of vertices size, where adj[0], adj[1],.. are vectors.
        vector<int>adj[vertices];

        for (int i = 0; i < edges; i++)
        {
            cin >> u >> v;

            // Bidirectional Graph(Undirected)
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        for (int i = 0; i < vertices; i++)
        {
            // Print Vertex first
            cout << i ;
            for(auto x : adj[i])
            {
                // Print its neighbouring node
                cout << "-> " << x;
            }
            cout << "\n";
        }

    }
	return 0;
}
