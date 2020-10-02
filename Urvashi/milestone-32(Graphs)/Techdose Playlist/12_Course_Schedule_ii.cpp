/* Both the solutions are based on topological soting. So,

What is Topological sorting?
=> Topological sorting is to sort the graph nodes in such a order such that for every edge uv ordering should be from u to v.
Topological sorting is possible only in the case of the directed cyclic graph, that's why we have checked for cycle in our solution1. 

Solution1:- DFS + stack

Time complexity:- O(V+E) where V is the no of vertices and E is the no of edges.

Approach:- As we have to find the order of traversal of the courses so that we can complete all the courses .
So , for every course we will check its neighbour courses if they are prerequisites for it or not .
if they are prerequisites then we will first take the prerequisites courses then this course.

There can be a case when there is a cycle in the graph , so in that case there will be deadlock then all 
the courses will be the deadlock for each other and there will be no order to complete all the courses.

so, we will check the cycle in the graph using graph coloring.

Here,
0 = unvisited node
1 = visited
2 = visited and processed

*/
class Solution {
public:
    bool detectCycle_util(vector<vector<int>> &adj, vector<int> &visited, int v)
    {
    	// if we reach a node which is visited but not processed it means we got a cycle.
        if(visited[v] == 1)
            return true;
        
        // if we reached a node which is processed then cycle cant be present.
        if(visited[v] == 2)
            return false;
        
        // otherwise just make the current node visited
        visited[v] = 1;
        
        // check for its neighbors if there is a cycle in its neighbor.
        for(int i = 0; i < adj[v].size(); i++)
        {
            if(detectCycle_util(adj, visited, adj[v][i]))
                return true;
        }
        // if not a cycle then make the current node processed and return false
        visited[v] = 2;
        return false;
    }
    
    bool detectCycle(vector<vector<int>> &adj, int n)
    {
    	// vsisited array with all nodes unvisited initially.
        vector<int> visited(n, 0);
        for(int i = 0; i < n; i++)
        {
        	// if any node is not visited then we will send it to visit it and also to check if there is a cycle through it.
            if(!visited[i])
            {
                if(detectCycle_util(adj, visited, i))
                    return true;
            }
        }
        return false;
    }
    
    void dfs(vector<vector<int>> &adj, int v, vector<bool> &visited, stack<int> &mystack)
    {
    	// we will mark the node as visited as we have visited it.
        visited[v] = true;
        
        // for all courses we will check their prerequisites and after visiting all its prerequisites we will push the course in ans stack.
        for(int i = 0; i < adj[v].size(); i++)
        {
            if(!visited[adj[v][i]])
                dfs(adj, adj[v][i], visited, mystack);
        }
        mystack.push(v);
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n = prerequisites.size();
        
        // adjacency matrix for all the courses.
        vector<vector<int>> adj(numCourses);
        
        // filling adjacency matrix.
        for(int i = 0; i < n; i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        
        vector<int> ans;
        // if we get any cycle in our graph that means there is a dead lock so we will just return the empty graph .
        if(detectCycle(adj, numCourses))
            return ans;
        
        stack<int>mystack;
        // we will take a visited array to make sure we will not take single course more than once.
        vector<bool> visited(numCourses, false);
        
        // we will traverse through all the courses and if they were not visited yet then we will visit them.
        for(int i = 0; i < numCourses; i++)
        {
            if(!visited[i])
                dfs(adj, i, visited, mystack);
        }
        
        // After processing the whole graph we will print its topological sort.
        while(!mystack.empty())
        {
            ans.push_back(mystack.top());
            mystack.pop();
        }
        return ans;
    }
};

/**********************************************************************************************************************************************************/
/*
Solution2:- Based on Kahn's Algorithm (BFS + Queue)

Time complexity:- O(V+E) where V is the number of vertices and E is the number of Edges.

What is Kahn's Algorithm?
=> This is the algorithm to so topological sorting. In this algorithm we will follow three steps:-
1. We will find indegree of every node means we will calculate the adjacent nodes of that vertice which are dependent on it.
2. We will push the node with 0 indegree into the queue because if we will complete the prerequisites first then we can traverse the whole graph.
3. Then we will remove all the nodes one by one from the queue and will reduce the indegree of their adjacent nodes which wew prerequisites for it.

We will take a count variable to check if there is a deadlock(cycle) in the graph. Because if there is a cycle in the graph then it means we cant
apply topological sort in it and there will be no way to complete all the courses.

So, for DAG(Directed acyclic graph) our count variable should be equal to the total no of nodes in the graph.

*/

class Solution {
public:
    bool kahnAlgo(vector<vector<int>> &adj, int n, vector<int> &indegree, vector<int> &ans)
    {
        queue<int> q;
        for(int i = 0; i < n; i++)
        {
        	// will push all the nodes with the indegree 0 in the queue as they are the prerequisite courses to complete first.
            if(indegree[i] == 0)
                q.push(i);
        }
        
        int count = 0;
        while(!q.empty())
        {
        	// one by one we will take every element of the queue and will traverse the adjacency list of it and will remove that node 
        	// and will reduce the indegree of the adjacent nodes which are the prerequisites for it.
            int curr = q.front();
            q.pop();
            
            for(auto a: adj[curr])
            {
                indegree[a] -= 1;
                // and will push the node having 0 indegree in the queue.
                if(indegree[a] == 0)
                    q.push(a);
            }
            // and after processing current node will push it in the ans.
            ans.push_back(curr);
            count++ ;
        }
        
        // checking for DAG.
        if(count != n)
            return false;
        return true;
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n = prerequisites.size();
        vector<vector<int>> adj(numCourses); // Adjacency matrix.
        vector<int> indegree(numCourses, 0); // indegree array.
        
        // traversing all the nodes of the graph.
        for(int i = 0; i < n; i++)
        {
        	// filling adjacency matrix for all the nodes of the graph.
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            // also filling indegree value for all nodes.
            indegree[prerequisites[i][0]] += 1;
        }
        
        vector<int> ans;
        
        // if graph is DAG and Kahn's algo is applied then return the ans.
        if(kahnAlgo(adj, numCourses, indegree, ans))
            return ans;
        
        // otherwise return the empty vector.
        vector<int> empty;
        return empty;
    }
};
