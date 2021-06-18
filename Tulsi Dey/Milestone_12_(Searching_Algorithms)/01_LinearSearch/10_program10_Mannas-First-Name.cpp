#include <bits/stdc++.h>
using namespace std;

void getRes()
{
    string s;
    cin >> s;
    int s1 = 0, s2 = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s.substr(i, 4) == "SUVO")
        {
            if (s.substr(i, 7) == "SUVOJIT")
                s2++;
            else
                s1++;
        }
    }
    cout << "SUVO = " << s1 << ", "
         << "SUVOJIT = " << s2 << endl;
}

int main()
{

    int testCases = 1;
    cin >> testCases;

    while (testCases-- > 0)
    {
        getRes();
    }
    return 0;
}