#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    stack<int> s;
    queue<int> s1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int h;
        cin >> h;
        s.push(h);
        s1.push(h);
    }
    while (!s1.empty() && !s.empty())
    {
        if (s1.front() > s.top())
        {
            s.pop();
            cout << "1 ";
        }
        else if (s1.front() < s.top())
        {
            s1.pop();
            cout << "2 ";
        }
        else if (s1.front() == s.top())
        {
            cout << "0 ";
            s.pop();
            s1.pop();
        }
    }
}
