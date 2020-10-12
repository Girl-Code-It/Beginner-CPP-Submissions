// https://leetcode.com/problems/find-the-town-judge/

// Solution : We will use Degree concept.Town Judge have 0 outDegree and N-1 inDegree.
// Time Complexity - O(N), Space Complexity - O(N)

class Solution
{
public:
    int findJudge(int N, vector<vector<int>> &trust)
    {
        vector<int> degree(N + 1);
        for (int i = 0; i < trust.size(); i++)
        {
            degree[trust[i][0]]--; // outDegree
            degree[trust[i][1]]++; // inDegree
        }

        for (int i = 1; i <= N; i++)
        {
            if (degree[i] == N - 1)
                return i;
        }
        return -1;
    }
};