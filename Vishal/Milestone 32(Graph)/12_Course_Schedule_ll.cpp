// https://leetcode.com/problems/course-schedule-ii/

/*
This Question is just an extension of previous question.
So first check 08_Course_Schedule.cpp, I have explain all working of the code.

Here I am Explaining just the change. and change is now instead of return true or false. Just return bfs vector.

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