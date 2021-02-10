#include <bits/stdc++.h>
#define ll long long
#define deb(x) cout << #x << " = " << x << endl;

using namespace std;

int bSearch(int arr[], int n, int k)
{
    int l = 0, r = n - 1;
    int mid = l + (r - l) / 2;

    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (arr[mid] == k)
        {
            return mid;
        }
        if (arr[mid] < k)
        {
            l = mid + 1;
        }
        if (arr[mid] > k)
        {
            r = mid - 1;
        }
    }
    return -1;
}
void getRes()
{
    int n;
    cin >> n;
    int q;
    cin >> q;
    int arr[n];
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);

    while (q-- > 0)
    {
        int x;
        cin >> x;
        if (bSearch(arr, n, x) != -1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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