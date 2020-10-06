/* Disjoint set implementation using rank.

Time complexity:- O(V*E)
*/

#include<bits/stdc++.h>
using namespace std;

struct node {
	int parent;
	int rank;
};

vector<node> dsuf;
//FIND operation
int find(int v)
{
	if(dsuf[v].parent==-1)
		return v;
    //Path Compression by storing the parent of the node which is being processed.
	return dsuf[v].parent=find(dsuf[v].parent);	
}

void union_op(int fromP,int toP)
{
	//fromP = find(fromP);
	//toP = find(toP);

	//UNION by RANK, the set having low rank will be the parent of the other set.
	if(dsuf[fromP].rank > dsuf[toP].rank)	//fromP has higher rank
		dsuf[toP].parent = fromP;
	else if(dsuf[fromP].rank < dsuf[toP].rank)	//toP has higher rank
		dsuf[fromP].parent = toP;
	else
	{
		//Both have same rank and so anyone can be made as parent
		dsuf[fromP].parent = toP;
		dsuf[toP].rank +=1;		//Increase rank of parent
	}
}

bool isCyclic(vector<pair<int,int>>& edge_List)
{
	for(auto p: edge_List)
	{
		int fromP = find(p.first);	//FIND absolute parent of subset
		int toP = find(p.second);

        // if absolute parent of both the sets are equal means there is path between the nodes and if we will
        // join them then it will be the second path which will form cycle. 
		if(fromP == toP)
			return true;

		//UNION operation, if there is no path before then just join them.
		union_op(fromP,toP);	//UNION of 2 sets
	}
	return false;
}

int main()
{
	int E;	//No of edges
	int V;	//No of vertices (0 to V-1)
	cin>>E>>V;

	dsuf.resize(V);	//Mark all vertices as separate subsets with only 1 element
	for(int i=0;i<V;++i)	//Mark all nodes as independent set
	{
		dsuf[i].parent=-1;
		dsuf[i].rank=0;
	}

	vector<pair<int,int>> edge_List;	//Adjacency list
	for(int i=0;i<E;++i)
	{
		int from,to;
		cin>>from>>to;
		edge_List.push_back({from,to});
	}

	if(isCyclic(edge_List))
		cout<<"TRUE\n";
	else
		cout<<"FALSE\n";
	
	return 0;
}

//TIME COMPLEXITY: O(E.V)