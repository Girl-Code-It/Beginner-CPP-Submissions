/* (https://www.geeksforgeeks.org/printing-longest-common-subsequence/)

Question:- Given two sequences, print the longest subsequence present in both of them.

Approach:- 
1. initialisation:- when any of the two strings is empty then empty subsequence will be common whose size will be zero.
2. Code:- If letters at particular index of the matrix is equal then will include that length of longest subsequence will be one greater than the length at one minus that index
else will not include that length and length will be the maximum of one less in the index.

Now , upto this we got the length of the longest common subsequence in our bottom right cell of DP matrix.

What will we do now to get the substring?
=> We will traverse the length of the two stings from last upto first index and will check if the two letters are equal if yes then we will include that letter in
our substring , else we will check that in DP matrix which length is greater (after excluding that letter of first string or after excluding that letter of second string) , 
the one which is greater we will shift to that length .

*/

#include <iostream>
#include <string>
using namespace std;

string longestCommonSubsequence(string X, string Y, int m, int n)
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
                DP[i][j] = max(DP[i-1][j], DP[i][j-1]);
        }
    }

    string result = "";
    
    int i = m, j = n;

    while (i > 0 && j > 0)
    {
        if (X[i - 1] == Y[j - 1])
        {
            result = X[i - 1] + result;
            i--;
            j--;
        }
        else
        {
            if (DP[i - 1][j] > DP[i][j - 1])
                i--;
            else
                j--;
        }
    }

   return result;
}

int main()
{
    int m, n;
    string X, Y;

    cin >> m >> n;
    cin >> X >> Y;

   cout << longestCommonSubsequence(X, Y, m, n) << "\n";

    return 0;
}
