#include<bits/stdc++.h>

using namespace std;

int get_min(string str)
{
    stack<char>stk;

    for(int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if(c == '(')    stk.push(c);
        else if(c == ')')
        {
            if(stk.empty() == true) stk.push(c);
            else if(stk.top() == '(')    stk.pop();
            else    stk.push(c);
 
        }
    }
    return stk.size();
}

void solve(string s, int mra, unordered_set<string> &ans)
{
    if(mra == 0)
    {
        int mrnow = get_min(s);
        if(mrnow == 0 and s.length() != 0 and ans.find(s) == ans.end())
        {
            cout << s << endl;
            ans.insert(s);
        }
        return;
    }
    for(int i = 0; i < s.length(); i++)
    { 
        string left = s.substr(0, i);
        string right = s.substr(i + 1);

        solve(left + right, mra - 1, ans);   
    }
}
int main()
{

    string s = "))((";
    unordered_set<string>ans;
    int mra = get_min(s);
    solve(s, mra, ans);
}
