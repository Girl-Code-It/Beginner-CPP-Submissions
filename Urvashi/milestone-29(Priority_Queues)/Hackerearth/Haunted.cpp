#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    ll n , m ;
    ll arr[1000001];
    cin>>n>>m;
    int x;
    map<ll,ll>mp;
    priority_queue<pair<ll,ll>>q;
    ll k = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>x;
        if(mp.count(x) == 0){
            mp[x] = k;
            arr[k]++ ;
            k++ ;
        }
        else
            arr[mp[x]]++ ;
        q.push(make_pair((arr[mp[x]]) , x));
        cout<<q.top().second<<" "<<q.top().first<<endl;
    }    
    
}
