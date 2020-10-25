// https://leetcode.com/problems/word-ladder/

/*
    Solution : BFS 
    Time complexity : O(26*N*W) , where N : length of each word, W : Total number of words
*/

class Solution
{
public:
    int ladderLength(string beginWord, string endWord, vector<string> &wordList)
    {
        unordered_set<string> s;
        
        // Checks if endWord is present in Dict
        bool isPresent = false; 

        // Insert all words from Dict in s
        for (auto word : wordList)
        {
            if (endWord.compare(word) == 0)
                isPresent = true;

            s.insert(word);
        }
        // endWord is not present in Dict, so its not possible
        if (isPresent == false) 
            return 0;

        queue<string> q;
        q.push(beginWord);
        int depth = 0;

        // BFS
        while (!q.empty())
        {
            depth += 1;
            int lsize = q.size(); 

            // for all the words at same level
            while (lsize--)
            {
                string curr = q.front();
                q.pop();

                //For each index of the word
                for (int i = 0; i < curr.length(); ++i) 
                {
                    string temp = curr;
                    for (char c = 'a'; c <= 'z'; ++c) //Try all possible chars
                    {
                        //Skip the same word
                        if (temp[i] == c)
                            continue; 

                        temp[i] = c;

                        // endWord found
                        if (temp.compare(endWord) == 0)
                            return depth + 1; 

                        // If new combination is given in set, then we will push this in queue and remove from set.
                        if (s.find(temp) != s.end())
                        {
                            q.push(temp);
                            s.erase(temp); 
                        }
                    }
                }
            }
        }
        return 0;
    }
};