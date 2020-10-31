#include <bits/stdc++.h> // to print the strongest unique substring
using namespace std;
int main()
{
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long len = s.size(); //lenngth of string
    string res;
    int i, j = 0, index = 0;
    for (i = 25; i >= 0; i--) // alphabets from z.
    {
        bool flag = true;
        for (; j < s.length(); j++) //traversing string.
        {
            if (s[j] == char(i + 'a')) //
            {
                res += s[j];
                index = j;
                flag = false;
                break;
            }
        }
        if (flag)
            j = index + 1;
    }
    cout << res;
}
