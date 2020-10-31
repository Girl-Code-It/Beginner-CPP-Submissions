/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <bits/stdc++.h>
using namespace std;

bool anagram(string s1, string s2)
{
    int l1 = s1.length();
    int l2 = s2.length();

    unordered_map<char, int> m;
    if (l1 != l2)
    {
        return false;
    }
    for (int i = 0; i < l1; i++)
    {
        m[s1[i]]++;
    }

    for (int i = 0; i < l2; i++)
    {
        if (m.find(s2[i]) == m.end())
        {
            return false;
        }
        else
        {
            m[s2[i]]--;
            if (m[s2[i]] == 0)
            {
                m.erase(s2[i]);
            }
        }
    }
    return m.size() == 0;
}

int main()
{
    int t;
    string s1, s2;
    cin >> t;
    while (t--)
    {
        cin >> s1 >> s2;
        anagram(s1, s2) ? cout << "YES\n" : cout << "NO\n";
    }
}
