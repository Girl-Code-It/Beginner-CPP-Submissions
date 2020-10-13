#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        char s[100000];
        cin >> s;
        int num = atoi(s);
        int count = 0;
        for (int i = 0; i < strlen(s) - 1; i++)
        {
            if ((s[i] == '2' && s[i + 1] == '1') || (num % 21) == 0)
                count++;
        }
        if (count)
            cout << "The streak is broken!" << endl;
        else
            cout << "The streak lives still in our heart!" << endl;
    }
}
