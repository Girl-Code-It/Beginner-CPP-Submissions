// https://practice.geeksforgeeks.org/problems/largest-square-formed-in-a-matrix/0


//Time Complexity - O(N*M), Space Complexity - O(N*M)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, n, m;
    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        int matrix[n][m];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[n][m];

        int sum[n][m];

        // Initialize first row
        for (int i = 0; i < n; i++)
            sum[i][0] = matrix[i][0];

        // Initialize first column
        for (int j = 0; j < m; j++)
            sum[0][j] = matrix[0][j];

        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (matrix[i][j] == 1)
                    sum[i][j] = min(sum[i - 1][j - 1], min(sum[i - 1][j], sum[i][j - 1])) + 1;
                else
                    sum[i][j] = 0;
            }
        }

        int ans = sum[0][0];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                ans = max(ans, sum[i][j]);

        cout << ans << "\n";
    }
}