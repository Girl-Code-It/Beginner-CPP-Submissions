#include<iostream>
#include<list>
#include<queue>
using namespace std;

//Adj List Implementation for Integer Nodes
class Graph{
	int V;	

	 //Array of Linked Lists of size V, V LL's are there
     list<int> *adjList;
public:
     Graph(int v){
     	V = v;
     	adjList = new list<int>[V];
     }
     void addEdge(int u,int v,bool bidir=true){
     	adjList[u].push_back(v);
     	if(bidir){
     		adjList[v].push_back(u);
     	}
     }
     void printAdjList(){
     	for(int i=0;i<V;i++){
     		cout<<i<<"->";
     		for(int node:adjList[i]){
     			cout<<node<<",";
     		}
     		cout<<endl;
     	}
     }

     void bfs(int src,int dest){
     	//Traverse all the nodes of the graph
     	queue<int> q;
     	bool *visited = new bool[V+1]{0};
     	int *dist = new int[V+1]{0};
     	int *parent = new int[V+1];

     	for(int i=0;i<V;i++){
     		parent[i] = -1;
     	}

     	q.push(src);
     	visited[src] = true;



     	while(!q.empty()){
     		int node = q.front();
     		cout<<node<<" ";
     		q.pop();

     		for(int neighbour:adjList[node]){
     			
     			if(!visited[neighbour]){
     				q.push(neighbour);
     				visited[neighbour] = true;
     				dist[neighbour] = dist[node]  + 1;
     				parent[neighbour] = node;
     			}
     		}
     	}
     	cout<<endl;
     	//Print the distances of every node from source
     	for(int i=0;i<V;i++){
     		//cout<<i<<"node having dist "<<dist[i]<<endl;
     	}

     	cout<<"Shortest dist is "<<dist[dest]<<endl;
     	cout<<"Shortest path is ";

     	int temp = dest;
     	while(temp!=-1){
     		cout<<temp<<"<--";
     		temp = parent[temp];
     	}
     }
};

int main(){
	/*Graph g(6);
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(0,4);
	g.addEdge(2,4);
	g.addEdge(3,2);
	g.addEdge(2,3);
	g.addEdge(3,5);
	g.addEdge(3,4);
	g.bfs(0,5);
	*/

	int board[50] = {0};
    board[2] = 13;
    board[5] = 2;
    board[9] = 18;
    board[18] = 11;
    board[17] = -13;
    board[20] = -14;
    board[24] = -8;
    board[25] = -10;
    board[32] = -2;
    board[34] = -22;
	Graph g(50);

	//Insert edges
	for(int u=0;u<36;u++){
		//Throw a dice from 1 to 6
		for(int dice=1;dice<=6;dice++){
			int v = u + dice + board[u+dice];
			g.addEdge(u,v,false);
		}
	}
	//Shortest path
	g.bfs(0,36);
	return 0;
}