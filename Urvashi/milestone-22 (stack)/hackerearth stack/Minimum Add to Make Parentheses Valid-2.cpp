#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            st.push(s[i]);

        else if (!st.empty() && st.top() == '(')
            st.pop();

        else
            st.push(s[i]);
    }
    cout << st.size();
}
