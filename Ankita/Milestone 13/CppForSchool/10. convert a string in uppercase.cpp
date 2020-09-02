//Write a program to convert a string in uppercase.
/*#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;
int main ()
{
    char a[100] ;
    cin.getline(a, 100);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] > 90 && a[i]!= 32)
            a[i] = a[i] - 32;
    }
    puts(a);
}*/
#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
string increement(string a)
{
    for(int i = 0; i < a.size(); i++)
    {
        a[i] += 1;
    }
    return a;
}
int main ()
{
    string a, b, c;
    int flag = 1;
    getline(cin, a);
    getline(cin, b);
    if (a.size() == b.size())
    {
        for (int i = a.size()-1; i > -1; i--)
        {
            if(a[i] != b[i] && i == a.size()-1)
                cout << "NO";
            else if(a[i] != b[i])
            {
                for(int k = 0; k <= i; k++)
                {
                    c[i] = a[i];
                }
                a = increement(c);
                if (a[i] != b[i])
                {
                    cout << "NO";
                    flag = 0;
                }

            }

        }
        if (flag == 1)
            cout << "YES";

    }

}

