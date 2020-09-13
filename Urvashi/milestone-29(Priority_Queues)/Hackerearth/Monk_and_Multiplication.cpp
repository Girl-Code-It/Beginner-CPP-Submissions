#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ; 
    cin>>n;
    int num ;
    priority_queue<int>q;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>num;
        q.push(num);
        if(i < 2)
        cout<<"-1\n";
        else
        {
            int x = q.top(); q.pop() ;
            int y = q.top(); q.pop() ;
            int z = q.top();
            long long ans = 1ll*x*y*z;
            cout<<ans<<"\n";
            q.push(x); q.push(y);
        }
    }
}
