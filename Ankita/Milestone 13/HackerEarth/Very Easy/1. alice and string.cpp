/*#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
string increement(string a)
{
    for(int i = 0; i < a.size(); i++)
    {
        a[i] += 1;
        cout << a[i];
    }
    // cout << "a = " << a << "\n";
    return a;
}
int main ()
{
    string a, b, c, e;
    int flag = 1;
    getline(cin, a);
    getline(cin, b);
    if (a.size() == b.size())
    {
        for (int i = a.size()-1; i > -1; i--)
        {
            if(a[i] != b[i] && i == a.size()-1)
            {
                cout << "NO";
                flag = 0;
                break;
            }
            else if(a[i] != b[i])
            {
                c = a;
                c.resize(i+1);
                cout <<"c = " << c << "\n";
                e = increement(c);
                a.replace(0, i, e);
                cout << "a = " << a << "\n";
                if (a[i] != b[i])
                {
                    cout << "in if a[i] != b[i]\n";
                    cout << "NO";
                    flag = 0;
                    break;
                }

            }

        }
        if (flag == 1)
            cout << "YES";

    }

}*/




#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
string increement(string a, char b, char a1)
{
    int m = int(b - a1);
    for(int i = 0; i < a.size(); i++)
    {
        a[i] += m;
    }
    return a;
}
int main ()
{
    string a, b, c, e;
    int flag = 1;
    getline(cin, a);
    getline(cin, b);
    if (a.size() == b.size())
    {
        for (int i = a.size()-1; i > -1; i--)
        {
            if((a[i] != b[i] && i == a.size()-1) || (a[i] != b[i] && b[i] < a[i]))
            {
                cout << "NO";
                flag = 0;
                break;
            }
            else if(a[i] != b[i])
            {
                c = a;
                c.resize(i+1);
                e = increement(c, b[i], a[i]);
                a.replace(0, i, e);

            }

        }
        if (flag == 1)
            cout << "YES";

    }

}

