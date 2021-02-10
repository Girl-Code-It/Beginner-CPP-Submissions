#include <bits/stdc++.h>
using namespace std;

void getRes()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int k;
    cin >> k;

    int c = 1, res = 0;
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            if (c == k)
            {
                cout << arr[i] << endl;
                return;
            }

            c = 1;
        }
        else
        {
            c++;
        }
    }
}

int main()
{

    int testCases = 1;
    // cin>>testCases;

    while (testCases-- > 0)
    {
        getRes();
    }
    return 0;
}