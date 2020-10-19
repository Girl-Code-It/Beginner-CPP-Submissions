// https://leetcode.com/problems/course-schedule-ii/

/*
This Question is just an extension of previous question.
So first check 08_Course_Schedule.cpp, I have explain all working of the code.

Here I am Explaining the changes required.

********************************************************************************************************************************
Solution 1: Topological Sorting.
It is a linear ordering of vertices such that for every directed edge uv(u -> v), vertex u comes before v in the ordering.
Topological Sorting for a graph is not possible if the graph is not a DAG. 

How do we do ?

1. First Find it is DAG or not. How ?
   we have done this part in preivious question.

2. Now apply Topological Sorting. (DFS + Stack)
   Apply DFS in graph, then store the processed nodes in stack. The Node having more outgoing edges will processed first.
   So after DFS, pop out the element of stack and store in a vector and return that vector.

*************************************************************************************************************************************

Solution 2: Kahn's Algorithm

How do we do ?
1. Count all prerequisities for every course i.e, indegree
2. Store all coursees in bfs vector which doesnt require any prerequisities. We will do these courses first.
3. Now starting bfs in all remaining courses as long as all prerequisities of a course are completed take that course as well.

Time complexity - O(E + V)
*/

class Solution
{
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites)
    {
        // G is used to build a graph
        vector<vector<int>> G(n);

        //Degree will count prerequisites, bfs will store all completed courses.
        vector<int> degree(n, 0), bfs;

        // Build Graph (Add edges) & store how much courses are prerequisites to complete a course.
        for (auto &e : prerequisites) 
            G[e[1]].push_back(e[0]), degree[e[0]]++;

        // If we didnt need any prerequisites then directly add to bfs.
        for (int i = 0; i < n; ++i)
        {
            if (!degree[i])
                bfs.push_back(i);
        }

        for (int i = 0; i < bfs.size(); ++i)
        {
            // i'th course is done
            for (int j : G[bfs[i]])
            {
                // If all prerequisites are done then add it to bfs
                if (--degree[j] == 0)
                    bfs.push_back(j);
            }
        }

        // Now return bfs if all courses can be completed
        if(bfs.size() != n)
            return {};
        else
            return bfs;
    }
};