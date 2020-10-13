#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, flag = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 1; i < n; i++)
        a[i] += a[i - 1];
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (((a[mid] + a[mid - 1]) == a[n - 1]) or (a[mid]) == (a[n - 1] - a[mid]))
        {
            flag = 1;
            break;
        }
        else if ((a[mid] + a[mid - 1]) < a[n - 1])
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";
}
