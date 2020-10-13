#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        int c = 0;
        for (int j = 0; j < i; j++)
        {
            if (s[j] < s[i])
                c++;
        }
        cout << c << endl;
    }
}
