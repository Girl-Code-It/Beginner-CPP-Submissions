// https://leetcode.com/problems/scramble-string/


//Solution 1: Recursion (Give TLE)
class Solution
{
public:
    bool isScramble(string s1, string s2)
    {
        if (s1.compare(s2) == 0)
            return true;

        if (s1 == "")
            return false;

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

        string key = s1;
        key += " " + s2;

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
        return m[key] = flag;
    }
};