#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    ll n , id , z , p , l , c , s ;
    cin>>n;
    priority_queue<pair<ll ,pair<ll,ll>>>q;
    while(n--)
    {
        cin>>id>>z>>p>>l>>c>>s;
        q.push(make_pair((p*50+l*5+c*10+s*20)-z , make_pair(id , p*50+l*5+c*10+s*20)));
    }

    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<(q.top().second).first << " " <<(q.top().second).second<<"\n";
        q.pop();
    }

}
