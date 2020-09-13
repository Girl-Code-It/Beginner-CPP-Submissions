/* (https://leetcode.com/problems/palindrome-partitioning-ii/)
   (https://practice.geeksforgeeks.org/problems/palindromic-patitioning/0)
*/

#include <iostream>
#include <cstring>
using namespace std;

int DP[1001][1001];

bool isPalindrome(string s, int i, int j)
{
    while (i < j)
    {
        if (s[i++] != s[j--])
            return false;
    }
    return true;
}

// Solution1 :- Recursive..
int Partitions(string s, int i, int j)
{
    // if string is empty or of only one element then its already a palindrome.
    if (i >= j)
        return 0;

    if (isPalindrome(s, i, j))
        return 0;

    int minimum = INT_MAX;
    for (int k = i; k <= j - 1; k++)
    {
        int tempAns = 1 + Partitions(s, i, k) + Partitions(s, k + 1, j);

        if (tempAns < minimum)
            minimum = tempAns;
    }
    return minimum;
}

// Solution2 :- Recursion + Memoization..
int Partitions(string s, int i, int j)
{
    // if string is empty or of only one element then its already a palindrome.
    if (i >= j)
        return 0;

    if (isPalindrome(s, i, j))
        return 0;

    if (DP[i][j] != -1)
        return DP[i][j];

    int minimum = INT_MAX;
    for (int k = i; k <= j - 1; k++)
    {
        int tempAns = 1 + Partitions(s, i, k) + Partitions(s, k + 1, j);

        if (tempAns < minimum)
            minimum = tempAns;
    }
    return DP[i][j] = minimum;
}

// Solution3 :- Recursive + Memoization + more Optimised..
int Partitions(string s, int i, int j)
{
    // if string is empty or of only one element then its already a palindrome.
    if (i >= j)
        return 0;

    if (isPalindrome(s, i, j))
        return 0;

    if (DP[i][j] != -1)
        return DP[i][j];

    int left, right;

    int minimum = INT_MAX;
    for (int k = i; k <= j - 1; k++)
    {
        if (DP[i][k] != -1)
            left = DP[i][k];
        else
            left = Partitions(s, i, k);
        DP[i][k] = left;

        if (DP[k + 1][j] != -1)
            right = DP[k + 1][j];
        else
            right = Partitions(s, k + 1, j);
        DP[k + 1][j] = right;

        int tempAns = 1 + left + right;

        if (tempAns < minimum)
            minimum = tempAns;
    }
    return DP[i][j] = minimum;
}

int main()
{
    string s;
    int t;
    cin >> t;

    while (t--)
    {
        cin >> s;
        memset(DP, -1, sizeof(DP));
        cout << Partitions(s, 0, s.size() - 1) << "\n";
    }
}