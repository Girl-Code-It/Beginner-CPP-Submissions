/* (https://leetcode.com/problems/network-delay-time/)

Time complexity:- O(E+V) as we are traversing all the nodes exactly once by using bfs.

Question:- We have to find the minimum time to travel all nodes from a given node, means we have to return the
distance to reach the farthest node.

Ways:-
1. We can solve it by using Dijkstra Algorithm.
2. We will solve it using Ripple effect algorithm.

Ripple effect algorithm:- In this algorithm we traverse all the nodes of the graph according to the levels
means we will first traverse all nodes at height 0 then 1, 2, 3 etc.

Steps:- 
1. firstly we will apply bfs to traverse all the nodes and we will update their distance from the source node.
2. we will find the maximum of the distance of all the nodes when they all are traversed.

*/

class Solution
{
    struct node
    {
        int dst;
        int wt;
    };
    struct qnode
    {
        int vertex;
        int dist;
    };

public:
    int networkDelayTime(vector<vector<int>> &times, int N, int K)
    {
        unordered_map<int, vector<node *>> adj;

        // making the adjacency list.
        for (int i = 0; i < times.size(); ++i)
        {
            node *newnode = new node;
            newnode->dst = times[i][1];
            newnode->wt = times[i][2];
            // pushing both destination and weight in adjacency list of all the source nodes.
            adj[times[i][0]].push_back(newnode);
        }

        qnode *qn = new qnode;
        qn->vertex = K; //Initial vertex is K
        qn->dist = 0;   //Source distance is 0
        queue<qnode *> q;
        q.push(qn); // pushing source node k with distance value 0 in the queue.

        // distance vector to store the distance of all the nodes from source node.
        vector<int> distance(N + 1, INT_MAX);
        distance[K] = 0; // distance of souce node is 0.
        int time = 0;    // time variable will store the min time to reach farthest node from source node.

        while (!q.empty()) //BFS
        {
            
            qnode *curr = q.front();
            q.pop();

            // traversing all the adjacent nodes of all the nodes.
            for (auto it : adj[curr->vertex])
            {
                qnode *temp_qn = new qnode;
                temp_qn->vertex = it->dst;
                temp_qn->dist = it->wt + curr->dist;

                // cheking if we can update the distance of the node if it is filed with infinity.
                if (distance[temp_qn->vertex] > temp_qn->dist)
                {
                    q.push(temp_qn);
                    distance[temp_qn->vertex] = it->wt + curr->dist;
                }
            }
        }
        //STEP-2: Find the max distance node (If all the nodes are traversed)
        for (int i = 1; i <= N; ++i)
        {
            // if any of th node is not traversed or unreachable.
            if (distance[i] == INT_MAX)
                return -1;
            time = max(time, distance[i]);
        }
        return time;
    }
};