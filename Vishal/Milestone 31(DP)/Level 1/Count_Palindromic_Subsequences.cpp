// https://practice.geeksforgeeks.org/problems/count-palindromic-subsequences/1

/*
This is dynamic programming (DP) problem.

DP(L, R), is the number of palindromic subsequences in S[L .... R]. Its formulated as following.

* 0 , if L>R
* 1 , if L=R
* DP(L + 1, R) + DP(L, R-1) - DP(L+1, R-1) , if S[L] != S[R]
* DP(L + 1, R) + DP(L, R-1) + 1 , if S[L] = S[R]

 Time Complexity - O(N^2), Space Complexity - O(N^2)
*/
#include <iostream>
#include <cstring>
using namespace std;
int DP[31][31];

//Solution 1: Recursion + Memoization
int count(string str, int start, int end)
{
    //Base Case
    if (start > end)
        return 0;

    // Already Computed
    if (DP[start][end] != -1)
        return DP[start][end];

    // Single element is palindrome
    if (start == end)
        return 1;

    // if first & last element matches.
    if (str[start] == str[end])
        return DP[start][end] = 1 + count(str, start + 1, end) + count(str, start, end - 1);
    else
        return DP[start][end] = count(str, start + 1, end) + count(str, start, end - 1) - count(str, start + 1, end - 1);
}

int countPS(string str)
{
    memset(DP, -1, sizeof(DP));
    return count(str, 0, str.size() - 1);
}

//Solution 2: Using DP
int countPS(string str)
{
    int N = str.size();

    int DP[N + 1][N + 1];
    memset(DP, 0, sizeof(DP));

    // Single element is palindrome
    for (int i = 0; i < N; i++)
        DP[i][i] = 1;

    for (int length = 2; length <= N; length++)
    {
        for (int i = 0; i < N; i++)
        {
            // Index of last element
            int j = length + i - 1;

            if (str[i] == str[j])
                DP[i][j] = 1 + DP[i + 1][j] + DP[i][j - 1];
            else
                DP[i][j] = DP[i + 1][j] + DP[i][j - 1] - DP[i + 1][j - 1];
        }
    }
    return DP[0][N - 1];
}

int main()
{
    int t;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> str;
        cout << countPS(str) << "\n";
    }
}