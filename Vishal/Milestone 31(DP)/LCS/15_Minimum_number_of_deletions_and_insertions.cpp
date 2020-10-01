// https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions/0

#include <iostream>
#include <string>
using namespace std;

int minNumberOfDeletionAndInsertion(string X, string Y, int m, int n)
{
    int DP[m + 1][n + 1];

    for (int i = 0; i <= m; i++)
        DP[i][0] = 0;

    for (int i = 0; i <= n; i++)
        DP[0][i] = 0;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1])
                DP[i][j] = 1 + DP[i - 1][j - 1];
            else
                DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
        }
    }

    return n + m - 2 * DP[m][n];
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

        cout << minNumberOfDeletionAndInsertion(X, Y, m, n) << "\n";
    }

    return 0;
}

/*********************************************************************************************************/

// https://leetcode.com/problems/delete-operation-for-two-strings/solution/

class Solution
{
public:
    int minNumberOfDeletion(string X, string Y, int m, int n)
    {
        int DP[m + 1][n + 1];

        for (int i = 0; i <= m; i++)
            DP[i][0] = 0;

        for (int i = 0; i <= n; i++)
            DP[0][i] = 0;

        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (X[i - 1] == Y[j - 1])
                    DP[i][j] = 1 + DP[i - 1][j - 1];
                else
                    DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
            }
        }
        return m + n - 2 * DP[m][n];
    }

    int minDistance(string word1, string word2)
    {
        return minNumberOfDeletion(word1, word2, word1.size(), word2.size());
    }
};