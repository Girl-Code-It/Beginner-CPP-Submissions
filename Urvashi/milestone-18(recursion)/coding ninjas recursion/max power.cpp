#include <stdio.h>
int main()
{
    int t, n, max, smin, smax, min, i, maxi, mini;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        maxi = 0, mini = 0;
        max = -1, smin = 10e9, min = 10e9, smax = -1;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > max)
            {
                smax = max;
                max = a[i];
                maxi = i;
            }
            else if (a[i] == max || a[i] > smax)
            {
                smax = a[i];
            }
            if (a[i] < min)
            {
                smin = min;
                min = a[i];
                mini = i;
            }
            else if (a[i] == min || a[i] < smin)
            {
                smin = a[i];
            }
        }
        if (maxi == 0 && mini == n - 1 && n != 2)
        {
            if (max - smin > smax - min)
                cout << max - smin;
            else
                cout << smax - min;
        }
        else
            cout << max - min;
    }
}
