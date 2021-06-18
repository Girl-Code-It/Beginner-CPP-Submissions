#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin>>s;
    int k; cin>>k;
    priority_queue<char,vector<char>,greater<char>> q; //implementing min priorirt queue
    string res = "";

    for(int i = 0; i < k; i++) q.push(s[i]);
    for(int i = k; i < s.length(); i++) 
    {
        res += q.top();
        q.pop();
        q.push(s[i]);
    }
    while(!q.empty())
    {
        res += q.top();
        q.pop();
    }

    cout<<res<<endl;
    
    return 0;
}