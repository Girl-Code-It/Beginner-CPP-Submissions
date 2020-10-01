// https://leetcode.com/problems/palindromic-substrings/

/*
Please Refer Longest Palindrome substring First so that you understand this solution

Twist.... Now we have to count all palindromic substring.

Simple we count number of true in lookup table.

Time Complexity - O(N^2), Space Complexity - o(N^2)
*/

class Solution
{
public:
    int countSubstrings(string s)
    {
        int n = s.size();
        if (n == 0)
            return 0;

        // dp[i][j] will be 'true' if the string from index i to j is a palindrome.
        bool dp[n][n];

        //Initialize with false
        memset(dp, 0, sizeof(dp));

        //Every Single character is palindrome
        for (int i = 0; i < n; i++)
            dp[i][i] = true;

        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[i] == s[j])
                {
                    //If it is of two character OR if its susbtring is palindrome.
                    if (j - i == 1 || dp[i + 1][j - 1])
                        dp[i][j] = true;
                }
            }
        }

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (dp[i][j])
                    ans++;

        return ans;
    }
};

// Solution 2: Expand Around Corner
// Time Complexity - O(N^2), Space Complexity - O(1)

class Solution
{
public:
    int countSubstrings(string s)
    {
        int count = 0;
        for (int i = 0; i < s.size(); i++) //here i is the centre
        {
            count += countPalindrome(s, i, i); //For odd length palindrome
            count += countPalindrome(s, i, i + 1);//For even length palindrome
        }
        return count;
    }

    int countPalindrome(string &s, int l, int r)
    {
        int count = 0;
        while (l >= 0 && r < s.size() && s[l--] == s[r++])
            count++;
        return count;
    }
};