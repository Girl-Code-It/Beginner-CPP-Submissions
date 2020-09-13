/* (https://leetcode.com/problems/scramble-string/)

Question:- Given two strings s1 and s2 of the same length, return true if s2 is a scrambled string of s1, otherwise, return false.
Two strings are Scrambled strings if in their recursive trees the node values are reverse or equal of each other.

*/

//Solution 1: Recursion (Give TLE)
class Solution
{
public:
    bool isScramble(string s1, string s2)
    {
        // Equal strings are scrambled.
        if (s1.compare(s2) == 0)
            return true;
        
        // Empty string is not scrambled.
        if (s1 == "")
            return false;

        int n = s1.length();
        bool flag = false; 
        
        // Traversing both strings we will check following conditions..
        for (int i = 1; i < n; i++)
        {
            // if at any node.
            // if first half of the first string is scramble of second half of second string and 
            // second half of the first string is scramble of first half of second string 
            if ((isScramble(s1.substr(0, i), s2.substr(n - i, i)) && isScramble(s1.substr(i, n - i), s2.substr(0, n - i))) 
            // OR
            // if first half of the first string is scramble of first half of second string and 
            // second half of the first string is scramble of second half of second string 
            ||  (isScramble(s1.substr(0, i), s2.substr(0, i)) && isScramble(s1.substr(i, n - i), s2.substr(i, n - i))))
            {
                // if any of these conditions are true then the two strings are scrambled , we will return true .
                flag = true;
                break;
            }
        }
        return flag;
    }
};

//Solution 2: Recursion + Memoization(Accepted)
class Solution
{
public:
    unordered_map <string, int> m;
    bool isScramble(string s1, string s2)
    {
        if (s1.compare(s2) == 0)
            return true;

        if (s1 == "")
            return false;

        // We will generate a unique key using the two strings as the key of the map as we always take those variables as key which are changing .
        string key = s1;
        key += " " + s2;

        // if key value is already present then no need to recalculate it.
        if (m.find(key) != m.end())
            return m[key];

        int n = s1.length();
        bool flag = false;

        for (int i = 1; i < n; i++)
        {
            if ((isScramble(s1.substr(0, i), s2.substr(n - i, i)) && isScramble(s1.substr(i, n - i), s2.substr(0, n - i))) 
            ||  (isScramble(s1.substr(0, i), s2.substr(0, i)) && isScramble(s1.substr(i, n - i), s2.substr(i, n - i))))
            {
                flag = true;
                break;
            }
        }
        // Otherwise we will store the value of the particluar key in the map so that it can be used later.
        return m[key] = flag;
    }
};
