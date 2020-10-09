/* (https://practice.geeksforgeeks.org/problems/negative-weight-cycle/0) 

	Bellman Ford Algorithm :  A shortest path from one node to every other node, negative edge are allowed.
*/

#include <bits/stdc++.h>
using namespace std;

struct edge
{
	// source, destination and weight of the nodes.
	int src, dst, wt;
};

int V, E;

void BellmanFord(vector<edge> &Edges)
{
	// parent array to store parents of every node.
	int parent[V];

	// cost of the edge from parent and the V vertices.
	int cost_parent[V];

	// value array to store the minimum path cost for every node.
	vector<int> value(V, INT_MAX);

    //Assuming start point as Node-0. Start node has no parent & value=0(Minimum, so that it will be processed first).
	parent[0] = -1;
	value[0] = 0;

	// It is just for optimization purpose, if there is no update in iteration then we will break.
	bool updated; 

	// V-1 times for E edges.
	for (int i = 0; i < V - 1; i++)
	{
		// If it will remain false after below loop, it means there was no update
		updated = false;

		for (int j = 0; i < E; j++)
		{
			int U = Edges[j].src, V = Edges[j].dst, wt = Edges[j].wt; 

			if (value[U] != INT_MAX and value[U] + wt < value[V])
			{
				value[V] = value[U] + wt;  // updating the cost.
				parent[V] = U;			   // updating the new parent of the node as by relaxing the parent will be changed.
				cost_parent[V] = value[V]; // updating the cost array also.
				updated = true;			   // as we did the relaxing so make the updated variable as true.
			}
		}

		// There was no update means we reach at our result.
		if (updated == false)
			break;
	}

	// doing relaxation one more time Vth time just for checking the negative edge cycle
	for (int j = 0; j < E and updated == true; j++)
	{
		int U = Edges[j].src, V = Edges[j].dst,wt = Edges[j].wt;

		if (value[U] != INT_MAX and value[U] + wt < value[V])
		{
			cout << "Graph has -VE edge cycle\n";
			return;
		}
	}

	for (int i = 1; i < V; i++)
	{
		cout << "U->V: " << parent[i] << "->" << i << " cost to reach " << parent[i] << "from source 0 = " << value[i] << "\n";
	}
}

int main()
{
	cin >> V >> E;
	vector<edge> Edges(E);

	int src, dst, wt;

	for (int i = 0; i < E; i++)
	{
		cin >> src >> dst >> wt;
		Edges[i].src = src;
		Edges[i].dst = dst;
		Edges[i].wt = wt;
	}

	BellmanFord(Edges);
	return 0;
}