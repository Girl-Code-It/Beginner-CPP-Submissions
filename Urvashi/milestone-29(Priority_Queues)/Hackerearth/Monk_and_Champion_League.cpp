#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll m , n ;
    cin>>m>>n;
    int a[m];
    priority_queue<int>q;
    ll ans;
    for(int i = 0 ; i < m ; i++)
    {
        cin>>a[i];
        q.push(a[i]);
    }
    for(int i = 0 ; i < n ; i++){
        int x = q.top(); q.pop();
        ans += x;
        x--;
        q.push(x);
    }
    cout<<ans<<"\n";
    
}
