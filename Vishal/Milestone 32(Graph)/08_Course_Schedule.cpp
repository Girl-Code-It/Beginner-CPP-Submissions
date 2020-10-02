// https://leetcode.com/problems/course-schedule/

/*
    I have multiple solution for this questions. I am discussing all solutions but write code later.

    Solution 1: Detect A Cycle in directed Graph.

    How do we think, this solution ?
    If you plot all prerequiste, you will see a graph pointed toward a vertex. As, it is pointed, means it is directed.
    Now if we got a cycle in directed graph. What does this implies? 

    Yes, It implies, we need to take course 1 for completing course 2 and need course 2 to complete course 1.
    Which is'nt possible. So as long as we find a cycle we will return false. if there is no cycle, then return true.
    I have written code already to detect a cycle. So please check 04_Detect_cycle_in_a_directed_graph.cpp in same folder.

********************************************************************************************************************************

    Solution 2: Topological Sorting
    I will discuss topological sorting in new file. You can think how topological sorting can apply here.(As an exercise)

*********************************************************************************************************************************

    Solution 3: Count how many course we can complete with given prerequisites.
    If we complete all courses then return true else return false. Check comments (It is not most optimized solution but it is shortest)

*/

class Solution
{
public:
    bool canFinish(int n, vector<vector<int>> &prerequisites)
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

        //Now check does all courses completed or not.
        return bfs.size() == n;
    }
};