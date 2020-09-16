/* (https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions/0)

Question:- Given two strings ‘str1’ and ‘str2’ of size m and n respectively. 
The task is to remove/delete and insert minimum number of characters from/in str1 so as to transform it into str2

Approach:-
1. initialisation:- when any of the two strings is empty then empty subsequence will be common whose size will be zero.
2. Code:- If letters at particular index of the matrix is equal then will include that length of longest subsequence will be one greater than the length at one minus that index
else will not include that length and length will be the maximum of one less in the index.

Using these steps we will get the length of longest subsequence.
Minimum no of deletions to convert str1 into str2 should be should be the remaining letters left after removing common letters from str1.
Minimum no of insertions to convert str1 into str2 should be the remaining letters left after removing common letters from str2.

*/

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

/* (https://leetcode.com/problems/delete-operation-for-two-strings/solution/)
In this Question , we have to find the minimum no of deletions in both strings to make them same , so for doing this we will discard the common letters from both strings.
*/

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
