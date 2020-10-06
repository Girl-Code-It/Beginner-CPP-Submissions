/* (https://leetcode.com/problems/course-schedule/)

Time complexity:- O(V+E) where V is the no of vertices and E is the no of edges. V is for traversing every vertice and E is to color them.

Approach:- I have used graph coloring technique here and i have used three colors 0, 1 and 2.

0 = unvisited vertice.
2 = node which is processing but not processed.
1 = node which is processed.

Logic is to detect deadlock in the graph in which there should be atleast one such cycle in the graph so that its each and every node depends 
on the other node means if we have cycle from 1->2->3->1 then every course is prerequisite course for other.

if this is the case, then there is no way to complete all the courses.

*/
class Solution {
public:
    bool isCyclic(vector<vector<int>> &adj, vector<int> &visited, int curr)
    {
	   // if we have reached a processing node it means we reach a deadlock . 
        if(visited[curr] == 2)
            return true;
        // otherwise just make the current node to be processing.
        visited[curr] = 2;
        for(int i = 0; i < adj[curr].size(); i++)
        {  
		    // if current node is not been processed and we find a cycle before it then there is a cycle or deadlock just return true.
            if(visited[adj[curr][i]] != 1)
            {
                if(isCyclic(adj, visited, adj[curr][i]))
                    return true;
                
            }
        }
        visited[curr] = 1;
        return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        // make a adjacency list for all the courses.
        vector<vector<int>> adj(numCourses);
        
        // we will make a directed graph as one is dependent on other.
        for(int i = 0; i < prerequisites.size(); i++)
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        
        // we will take a visited vector with all the vertices unvisited initially.
        vector<int> visited(numCourses, 0);
        for(int i = 0; i < numCourses; i++)
        {
            // if we get a unvisited vertice then we will send it to isCyclic fxn to color it and to check if any cylce is present.
            if(visited[i] == 0)
            {
                if(isCyclic(adj, visited, i))
                    return false;
            }
        }
        return true;
    }
};
