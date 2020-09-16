/* (https://practice.geeksforgeeks.org/problems/longest-common-substring/0)

Question:- Given two strings ‘X’ and ‘Y’, find the length of the longest common substring.

Approach :- 
Now common substring means we have to take only continous letters in our output , if at any point we get break in our substring then we will make its size zero and will restart.
1. Initialisation:- If either of the string is empty then empty substring(size 0) will be common in them.
2. Code:- At every index we will check the equality of letters , if they are equal then the length will be previous length + this letter , else will initialise length with zero
and will start again.

*/


#include <iostream>
#include <string>
using namespace std;

int longestCommonSubstring(string X, string Y, int m, int n)
{
    int DP[m + 1][n + 1], result = 0;

    for (int i = 0; i <= m; i++)
        DP[i][0] = 0;

    for (int i = 0; i <= n; i++)
        DP[0][i] = 0;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1])
            {
                DP[i][j] = 1 + DP[i - 1][j - 1];
                result = max(result, DP[i][j]);
            }
            else
                DP[i][j] = 0;
        }
    }

    return result;
}

int main()
{
    int t, m, n;
    string X, Y;
    cin >> t;

    while (t--)
    {
        cin >> m >> n;

        cin >> X >> Y;

        cout << longestCommonSubstring(X, Y, m, n) << "\n";
    }

    return 0;
}
