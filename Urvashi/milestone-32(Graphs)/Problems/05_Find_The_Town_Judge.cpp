/* (https://leetcode.com/problems/find-the-town-judge/submissions/)

Time complexity:- O(N) , Space complexity:- O(N).

Simple degree concept.
Approach:- For a person to be towm judge his outdegree should be 0 as town judge do no trust anyone 
and his indegree should be N-1 as everyone except town judge trusts towm judge.

*/

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int>degree(N+1);
        
        for(int i = 0; i < trust.size(); i++)
        { 
            degree[trust[i][0]]--; 
            degree[trust[i][1]]++;
        }
        
        for(int i = 1; i <= N; i++)
        {
            if(degree[i] == N - 1)
                return i;
        }
        return -1;
    }
};