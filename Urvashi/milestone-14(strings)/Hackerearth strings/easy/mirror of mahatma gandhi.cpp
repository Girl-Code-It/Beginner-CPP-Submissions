//question: if string and mirror image of string is equal then print yes else no.

#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t, i;
    cin >> t;
    while (t--)
    {
        int x = 1;
        string s;
        cin >> s;
        for (i = 0; i < s.size(); i++) // traversing string.
        {
            //only 0, 8, 1 are the digits which are equal to their mirror image.
            if (s[i] == '0' || s[i] == '1' || s[i] == '8')
                continue;
            else
            {
                x++;
                break;
            }
        }
        for (i = 0; i < s.size() / 2; i++)
        {
            if (s[i] != s[s.size() - i - 1])
            {
                x++;
                break;
            }
        }
        if (x == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
