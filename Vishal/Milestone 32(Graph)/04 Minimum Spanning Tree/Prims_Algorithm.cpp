/* https://practice.geeksforgeeks.org/problems/minimum-spanning-tree/1

    Prims Algorithm : To find MST

    steps :
    1. Select a vertex having minimum value.
    2. Store in a setMst. 
    3. Relax/ Compute all adjacent edges.
    4. Repeat above three step until all edges are processed, i.e, setMst contain all vertices.

    TIME COMPLEXITY: O(V^2)
*/


#include<bits/stdc++.h>
using namespace std;

//No of vertices
#define V 6		

// This function select vertex having minimum value
int selectMinVertex(vector<int>& value,vector<bool>& setMST)
{
	int minimum = INT_MAX;
	int vertex;
	for(int i=0;i<V;++i)
	{
        // Select new vertex having minimum value and not processed yet
		if(setMST[i]==false && value[i]<minimum)
		{
			vertex = i;
			minimum = value[i];
		}
	}
	// return the vertex having minimum value
	return vertex;
}

void findMST(int graph[V][V])
{
    // It is used for printing MST
	int parent[V];

    // It is Used for edge relaxation & finding vertex having minimum value.
	vector<int> value(V,INT_MAX);	

    // Initaially No Vertex is included in MST
	vector<bool> setMST(V,false);	

	//Assuming start point as Node-0. Start node has no parent & value=0(Minimum, so that it will be processed first).
	parent[0] = -1;	
	value[0] = 0;	

	//Form MST with (V-1) edges
	for(int i=0;i<V-1;++i)
	{
		//Step 1 : Select Vertex having minimum value by applying greedy method
		int U = selectMinVertex(value,setMST);

        //Step 2 : Include that Vertex in MST
		setMST[U] = true;	

		//Step 3 : Relax adjacent vertices (not included yet in MST)
		for(int j=0;j<V;++j)
		{
			/* s3 constraints to check  :
			      1.Edge is present from U to j.
			      2.Vertex j is not included in MST
			      3.Edge weight is smaller than current edge weight
			*/
			if(graph[U][j]!=0 && setMST[j]==false && graph[U][j]<value[j])
			{
				value[j] = graph[U][j];
				parent[j] = U;
			}
		}
	}
	//Print MST
	for(int i=1;i<V;++i)
		cout<<"U->V: "<<parent[i]<<"->"<<i<<"  wt = "<<graph[parent[i]][i]<<"\n";
}

int main()
{
    // This is Adjacency Matrix
	int graph[V][V] = { {0, 4, 6, 0, 0, 0},
						{4, 0, 6, 3, 4, 0},
						{6, 6, 0, 1, 8, 0},
						{0, 3, 1, 0, 2, 3},
						{0, 4, 8, 2, 0, 7},
						{0, 0, 0, 3, 7, 0} };

	findMST(graph);	
	return 0;
}