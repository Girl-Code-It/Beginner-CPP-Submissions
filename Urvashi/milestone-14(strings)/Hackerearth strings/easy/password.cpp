//question: we have to input the no of passwords choices . and passwords .
// now we have to print the middle chracter and length of that password whose reverse is also present in the
// choices .

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, l, d;
    cin >> t;
    string s[t];
    for (int i = 0; i < t; i++) // input the passwords upto the no we have entered.
        cin >> s[i];
    string temp; // initilaise a string temp .
    for (int i = 0; i < t; i++)
    {
        temp = s[i];                       // store the string one by one in the temp and check them one by one.
        l = s[i].size();                   // store length of string into l.
        reverse(s[i].begin(), s[i].end()); // reverse the string.
        for (int j = 0; j < t; j++)
        {
            if (j != i) // checking any two of the strings one by one that if their any char other than the char at same postion are equal or not.
            {
                if (s[i] == s[j]) // if its palindrome.
                {
                    d = l / 2; // then middle char and length of string is printed.
                    cout << s[i].size() << " " << s[j][d];
                    goto end;
                }
            }
        }
    }
end:;
}
