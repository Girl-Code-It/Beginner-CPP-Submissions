// to print no of operations by which u can convert a string into full uppercase or full lowercase.

#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    if ((t > 10) || (t == 0)) // if no of test cases are not under contraints.
        cout << "Invalid Test\n";
    else
    {
        char s[100];
        while (t--)
        {
            cin >> s;
            int lower = 0, upper = 0;
            int size = strlen(s);
            if ((size == 0) || (size > 100)) // if size of string is not under constraints.
                cout << "Invalid Input\n";
            else
            {
                for (int i = 0; i < size; i++)
                {
                    if (islower(s[i])) //if lower
                        lower++;
                    else if (isupper(s[i])) //if upper.
                        upper++;
                }
                if ((upper == 0) && (lower == 0)) //if string do not carry either lower or upper.
                    cout << "Invalid Input\n";
                else
                {
                    if (upper > lower) // print the no which is less.
                        cout << lower << endl;
                    else
                        cout << upper << endl;
                }
            }
        }
    }
}
