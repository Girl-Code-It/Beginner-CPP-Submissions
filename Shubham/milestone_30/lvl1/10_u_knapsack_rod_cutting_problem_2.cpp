#include <bits/stdc++.h>

using namespace std;

int cut_it(vector<int> A, int L, int n)
{
    int dp[n + 1][L + 1];

    //initialization

    for (int j = 0; j < L + 1; j++)
        dp[0][j] = 0;

    for (int i = 0; i < n + 1; i++)
        dp[i][0] = 0;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < L + 1; j++)
        {
            if (A[i - 1] <= j)
            {
                int included = 1 + dp[i][j - A[i - 1]];
                int excluded = dp[i - 1][j];

                dp[i][j] = max(included, excluded);
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[n][L];
}
//Function to find the maximum number of cuts.
int maximizeTheCuts(int n, int x, int y, int z)
{
    //Your code here

    vector<int> A = {x, y, z};
    return cut_it(A, n, A.size());
}
int main()
{
    cout << maximizeTheCuts(5, 5, 3, 2) << endl;
}