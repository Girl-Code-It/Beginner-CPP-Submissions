#include <bits/stdc++.h>
using namespace std;

char nonRepeatingCharacter(string str)
{
    unordered_map<int, int> m;
    for (int i = 0; i < str.size(); i++)
        m[str[i]]++;
    char res;
    for (int i = 0; i < str.size(); i++)
    {
        if (m[str[i]] == 1)
        {
            return str[i];
            break;
        }
    }
}
