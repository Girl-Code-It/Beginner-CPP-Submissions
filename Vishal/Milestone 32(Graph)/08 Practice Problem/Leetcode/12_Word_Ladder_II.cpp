// (https://leetcode.com/problems/word-ladder-ii/)

/* 
    Solution : BFS(For finding length of Sequence) + DFS(For printing that sequence)

    Time complexity:- O(26*L*N + V*E) 
    L is for the word length, N for the no of words at same level , V*E is for all the possible paths in dfs.
*/

class Solution
{
public:
    //Stores all possible paths
    vector<vector<string>> ans; 

    void DFS(string &beginWord, string &endWord, unordered_map<string, unordered_set<string>> &adj, vector<string> &path)
    {
        //Push current word
        path.push_back(beginWord); 
        
        // if we reached the endword then store the whole path in ans.
        if (beginWord == endWord)  
        {
            ans.push_back(path);
            
            // Backtracking
            path.pop_back();
            return;
        }
        for (auto x : adj[beginWord])
            DFS(x, endWord, adj, path);

        path.pop_back(); //Pop current word to Backtrack
    }

    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string> &wordList)
    {
        //Adjacency List
        unordered_map<string, unordered_set<string>> adj;             
        
        //Insert WordList in SET
        unordered_set<string> dict(wordList.begin(), wordList.end()); 

        //STEP-1: Find min-depth using BFS
        queue<string> Q;                    
        Q.push(beginWord);                
        
        //Key->String (Node)...Value->Level (Depth of traversal)
        unordered_map<string, int> visited; 
        
        //Start node will always be at level 0
        visited[beginWord] = 0;         

        while (!Q.empty())
        {
            string curr = Q.front();
            Q.pop();
            string temp = curr;
            
            //For all characters
            for (int i = 0; i < curr.size(); ++i) 
            {
                //Try all possible 26 letters
                for (char x = 'a'; x <= 'z'; ++x) 
                {
                    //Skip if letter is same as in original word
                    if (temp[i] == x) 
                        continue;

                    temp[i] = x;
                    //Check if new word is present in wordList
                    if (dict.count(temp) > 0) 
                    {
                        // Mark new word as visited, Initialize its level
                        if (visited.count(temp) == 0) 
                        {
                            // going to next level.
                            visited[temp] = visited[curr] + 1; 
                            Q.push(temp);
                            adj[curr].insert(temp);
                        }

                        // If already visited and new word is the child (We should always move down)
                        else if (visited[temp] == visited[curr] + 1)
                            adj[curr].insert(temp);
                    }
                }
                //Revert back temp to curr
                temp[i] = curr[i]; 
            }
        }
        //STEP-2: Find all possible paths at min-depth using DFS
        vector<string> path;
        
        //Find all possible paths with min-depth
        DFS(beginWord, endWord, adj, path); 
        return ans;
    }
};