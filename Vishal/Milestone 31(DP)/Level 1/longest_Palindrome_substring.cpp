// https://leetcode.com/problems/longest-palindromic-substring/

/*
Solution 1: Brute Force Approach (Give TLE)

Generate all substring and check it is palindrome or not.
If it is palindrome then check it is longest or not.

Time Complexity - O(N^3),  O(N^2) to generate all substring and O(N) to check it is palindrome or not.
Space complexity - O(1).
*/

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int i = 0, j = s.size() - 1;

        while (i < j)
        {
            if (s[i++] != s[j--])
                return false;
        }
        return true;
    }

    string longestPalindrome(string s)
    {
        int n = s.size();
        if (n == 0)
            return "";

        if (n == 1)
            return s[0];

        string result = "";
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                if (isPalindrome(s.substr(i, j)))
                {
                    if (result.size() < j)
                        result = s.substr(i, j);
                }
            }
        }
        return result;
    }
};

/*
Above Solution Give TLE....

How Can we optimise our code?

Got it in above solution, we do unnecessary recompution while validating palindomes.
For example : if we know string "aba" is palindrome then "cabac" must be palindrome as left and right are equal.

Solution 2: Using DP

P(i, j) == P(i+1, j-1) && s[i] == s[j];

Base cases :

//One character
P(i, i) = true;

//Two character
P(i, i+1) = s[i] == s[i+1];

Time Complexity - O(N^2), Space Complexity - O(N^2) (caching all substring)
*/

class Solution
{
public:
    string longestPalindrome(string s)
    {
        int n = s.size();
        if (n == 0)
            return "";

        // dp[i][j] will be 'true' if the string from index i to j is a palindrome.
        bool dp[n][n];

        //Initialize with false
        memset(dp, 0, sizeof(dp));

        //Every Single character is palindrome
        for (int i = 0; i < n; i++)
            dp[i][i] = true;

        string ans = "";
        ans += s[0];

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[i] == s[j])
                {
                    //If it is of two character OR if its susbtring is palindrome.
                    if (j - i == 1 || dp[i + 1][j - 1])
                    {
                        //Then it will also a palindrome substring
                        dp[i][j] = true;

                        //Check for Longest Palindrome substring
                        if (ans.size() < j - i + 1)
                            ans = s.substr(i, j - i + 1);
                    }
                }
            }
        }
        return ans;
    }
};