#include <bits/stdc++.h>
#define ll long long
#define deb(x) cout << #x << " = " << x << endl;

using namespace std;

int getAns(vector<vector<char>> arr, int n, int k)
{
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
             
            if (arr[i][j] == 'P')
            {
                int up = j - k, dwn = j + k;
                for (int l = max(0, up); l <= min(dwn, n - 1); l++)
                {
                    if (arr[i][l] == 'T')
                    {
                        c++;
                        arr[i][l] = '0';
                        arr[i][j] = '0';
                        break;
                    }
                }
            }
        }
    }

    return c;
}
void getRes()
{
    int n, k;
    cin >> n >> k;
    vector<vector<char>> arr(n, vector<char>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sol = getAns(arr, n, k);
    cout << sol << endl;
}
int main()
{
    int testCases;
    cin >> testCases;

    while (testCases-- > 0)
    {
        getRes();
    }
    return 0;
}