/* (https://leetcode.com/problems/word-ladder/submissions/)

Time complexity:- O(26*N*N*W)

Approach:-
1. Firstly, we will check that the end word we have to make from the start word is present in the wordlist or not.
2. We will traverse all the nodes at a level and will apply all the possible changes in the word to form new word at that level, we will change only one letter at a time. 
3. As, we are going level by level, so we will reeach the end word in minimum transformations.

*/

class Solution
{
public:
    int ladderLength(string beginWord, string endWord, vector<string> &wordList)
    {
        unordered_set<string> myset;
        bool isPresent = false; //Checks if endWord is present in Dict
        //Insert all words from Dict in myset
        for (auto word : wordList)
        {
            if (endWord.compare(word) == 0)
                isPresent = true;
            myset.insert(word); //Insert word in Dict
        }
        if (isPresent == false) //endWord is not present in Dict
            return 0;

        queue<string> q;
        q.push(beginWord);
        int depth = 0;

        // for every single level there will be no of words at that level
        while (!q.empty())
        {
            depth += 1;
            int lsize = q.size(); //No of elements at a level

            // for all the words at same level
            while (lsize--)
            {
                string curr = q.front();
                q.pop();
                //check for all possible 1 depth words
                for (int i = 0; i < curr.length(); ++i) //For each index of the word
                {
                    string temp = curr;
                    for (char c = 'a'; c <= 'z'; ++c) //Try all possible chars
                    {
                        temp[i] = c;
                        if (curr.compare(temp) == 0)
                            continue; //Skip the same word
                        if (temp.compare(endWord) == 0)
                            return depth + 1; //endWord found
                        if (myset.find(temp) != myset.end())
                        {
                            q.push(temp);
                            myset.erase(temp); // we will erase the processed word from the dictionary.
                        }
                    }
                }
            }
        }
        return 0;
    }
};