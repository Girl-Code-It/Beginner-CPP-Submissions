/* (https://leetcode.com/problems/flower-planting-with-no-adjacent/)

Time complexity:- O(V+E) , Space complexity:- O(N)
*/

class Solution 
{
public:
    vector<int> gardenNoAdj(int N, vector<vector<int>>& paths) 
    {
        vector<vector<int>>adj(N);
        vector<int>answer(N);

        // Making adjacency list and we are decrementing 1 because our adjacency list start from index 0
        // and our path starts with 1.
        for (int i = 0; i < paths.size(); i++)
        {
            adj[paths[i][0] - 1].push_back(paths[i][1] - 1);
            adj[paths[i][1] - 1].push_back(paths[i][0] - 1);
        }

        for (int i = 0; i < N; i++)
        {
            // to check the available color for every garden.
            bool color[5] = {false};

            // giving adjacent gardens available color flower.
            for(auto j : adj[i])
                color[answer[j]] = true;
            
            // putting the flower color which hasn't assigned to any garden yet.
            for (int j = 1; j <= 4; j++)
            {
                if(!color[j])
                    answer[i] = j;
            }
        }
        return answer;
    }
};
