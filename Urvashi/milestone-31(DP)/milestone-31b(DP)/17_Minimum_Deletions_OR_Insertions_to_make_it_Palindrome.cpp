/* [Minimum Deletion] (https://practice.geeksforgeeks.org/problems/minimum-deletitions/0)
   [Form a Palindrome] (https://practice.geeksforgeeks.org/problems/form-a-palindrome/0)
   
   Question:- We have to find the minimum no of deletions to make the given string palindrome.
   
   Approach:-
   To get minimum no of deletions we have to discard all the letters which are common in string and its reverse.
   
   1. initialisation:- when any of the two strings is empty then empty subsequence will be common whose size will be zero.
   2. Code:- If letters at particular index of the matrix is equal then will include that length of longest subsequence will be one greater than the length 
   at one minus that index else will not include that length and length will be the maximum of one less in the index.
   
   Using these steps we wil get LCS of the given string and its reverse and after subtracting LCS from string length we will get a palindrome.
   
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int longestPalindromeSubsequence(string s1, string s2, int n, int m)
{
    int DP[n + 1][m + 1];

    for (int i = 0; i <= n; i++)
        DP[i][0] = 0;

    for (int i = 0; i <= m; i++)
        DP[0][i] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                DP[i][j] = 1 + DP[i - 1][j - 1];
            else
                DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
        }
    }
    //Minimum deletion
    return m - DP[n][m];
}

int main()
{
    string s1, s2;
    int t;
    cin >> t;

    while (t--)
    {
        cin >> s1;

        s2 = s1;
        reverse(s2.begin(), s2.end());

        cout << longestPalindromeSubsequence(s1, s2, s1.size(), s2.size()) << "\n";
    }

    return 0;
}
/******************************************************************************************************/

/* [Minimum Insertion] (https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/)

Question:- We have to add minimum no of letters to make our string palindrome.

Approach:- Find LCS of string and its reverse , now to make a string palindrome we can do two things either we can discard the single occurred elements 
or we can add elements , so in insertion we will add that no of elements in our string.

*/

class Solution
{
public:
    int longestPalindromeSubsequence(string s1, string s2, int n, int m)
    {
        int DP[n + 1][m + 1];

        for (int i = 0; i <= n; i++)
            DP[i][0] = 0;

        for (int i = 0; i <= m; i++)
            DP[0][i] = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (s1[i - 1] == s2[j - 1])
                    DP[i][j] = 1 + DP[i - 1][j - 1];
                else
                    DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
            }
        }
        //Minimum Insertion
        return m - DP[n][m];
    }

    int minInsertions(string s1)
    {
        string s2 = s1;
        reverse(s2.begin(), s2.end());

        return longestPalindromeSubsequence(s1, s2, s1.size(), s2.size());
    }
};
