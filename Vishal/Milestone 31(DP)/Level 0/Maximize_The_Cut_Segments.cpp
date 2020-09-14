// https://practice.geeksforgeeks.org/problems/cutted-segments/0

/*
 First Refer Unbounded Knapsack Problem.(knapsack with Duplicate items)

 Time Complexity - O(N), Space Complexity - O(N)
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a[4];
        cin >> n;
        a[0] = 0;
        cin >> a[1] >> a[2] >> a[3];
        sort(a, a + 4);

        int t[4][n + 1];
        for (int i = 0; i <= 3; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                if (i == 0 || j == 0)
                    t[i][j] = 0;

                else if (a[i] > j)
                    t[i][j] = t[i - 1][j];

                else
                {
                    if (t[i][j - a[i]] == 0 && j - a[i] != 0 && t[i - 1][j] == 0)
                        t[i][j] = 0;
                    else
                        t[i][j] = max(t[i - 1][j], t[i][j - a[i]] + 1);
                }
            }
        }
        cout << t[3][n] << endl;
    }
} 