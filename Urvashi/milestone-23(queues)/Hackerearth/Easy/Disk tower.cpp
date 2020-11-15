#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[i];

    priority_queue<int> pq1, pq2;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        pq1.push(a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == pq1.top())
        {
            cout << a[i] << " ";
            pq1.pop();
            while (!pq1.empty() && !pq2.empty())
            {
                if (pq1.top() == pq2.top())
                {
                    cout << pq2.top() << " ";
                    pq1.pop();
                    pq2.pop();
                }
                else
                {
                    break;
                }
            }
            cout << endl;
        }
        else
        {
            cout << endl;
            pq2.push(a[i]);
        }
    }
}
