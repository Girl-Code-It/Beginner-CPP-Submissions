/* (https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1)

Dijkstra Algorithm..

What is Dijkstra Algorithm?
=> It is the shortest path algorithm, used to connect source node to every other node using the shortest path and covering all the V-1 edges.

Steps for Dijkstra algorithm are:-
1. Mark all the vertices as unvisited initially.
2. Mark all the nodes with infinite distance initially except source node. so that source node will be choosen.
3. Repeat the following steps V-1 times:-
    (i) Pick the minimum value node which is unprocessed.
    (ii) Mark the node as processed.
    (iii) Update all adjacent vertices if cost[u] + wt[uv] < cost[v] else skip updation.

Time complexity:- O(ElogV).

Limitation:- Dijkstra Algorithm do not detect negative edge cycle.

What is negative egde cycle?
=> If a cycle in a graph has total weight -ve then we have a negative edge cycle.
*/

#include <bits/stdc++.h>
using namespace std;

#define V 6 //No of vertices

// fxn to find the minimum of all the nodes, for optimisation we can use priority queue.
int selectMinVertex(vector<int> &value, vector<bool> &processed)
{
	int minimum = INT_MAX;
	int vertex;
	for (int i = 0; i < V; ++i)
	{
		// if a node is not processed yet and its value is less than the current minimum then we will update
		// the current minimum but if the node is already processed then we will not process it again.
		if (processed[i] == false && value[i] < minimum)
		{
			// as index of the value array is having the node value so we will store the vertex value
			// in vertex variable as i and will return the vertex.
			vertex = i;
			minimum = value[i];
		}
	}
	return vertex;
}

void dijkstra(int graph[V][V])
{
	int parent[V];					  //Stores Shortest Path Structure
	vector<int> value(V, INT_MAX);	  //Keeps shortest path values to each vertex from source
	vector<bool> processed(V, false); //TRUE->Vertex is processed

	//Assuming start point as Node-0
	parent[0] = -1; //Start node has no parent
	value[0] = 0;	//start node has value=0 to get picked 1st

	//Include (V-1) edges to cover all V-vertices
	for (int i = 0; i < V - 1; ++i)
	{
		//Select best Vertex by applying greedy method
		int U = selectMinVertex(value, processed);
		processed[U] = true; //Include new Vertex in shortest Path Graph

		//Relax adjacent vertices (not yet included in shortest path graph)
		for (int j = 0; j < V; ++j)
		{
			/* 3 conditions to relax:-
			      1.Edge is present from U to j.
			      2.Vertex j is not included in shortest path graph(not processed)
			      3.Edge weight is smaller than current edge weight
			*/
			if (graph[U][j] != 0 && processed[j] == false && value[U] != INT_MAX && (value[U] + graph[U][j] < value[j]))
			{
				value[j] = value[U] + graph[U][j];
				parent[j] = U;
			}
		}
	}
	//Print Shortest Path Graph
	for (int i = 1; i < V; ++i)
		cout << "U->V: " << parent[i] << "->" << i << "  wt = " << graph[parent[i]][i] << "\n";
}

int main()
{
	int graph[V][V] = {{0, 1, 4, 0, 0, 0},
					   {1, 0, 4, 2, 7, 0},
					   {4, 4, 0, 3, 5, 0},
					   {0, 2, 3, 0, 4, 6},
					   {0, 7, 5, 4, 0, 7},
					   {0, 0, 0, 6, 7, 0}};

	dijkstra(graph);
	return 0;
}