#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int A[n], B[n];

    for (int i = 0; i < n; i++)
        cin >> A[i];

    stack<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && A[s.top()] < A[i])

            s.pop();
        if (!s.empty())
            B[i] = A[i] ^ B[s.top()];

        else
            B[i] = A[i];

        s.push(i);
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < B[i])
            max = B[i];
    }
    cout << max;
}
