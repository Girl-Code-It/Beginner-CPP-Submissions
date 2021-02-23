//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/haunted/


#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    ll n , m ;
    ll a[1000001];
    cin>>n>>m;
    int x;
    map<ll,ll>mp;
    priority_queue<pair<ll,ll>>q;
    ll k = 0;

	for(int i=0;i<n;i++){
		cin>>x;
	if(mp.count(x) == 0){
		mp[x] = k;
		a[k]++;
		k++;
	}
	else{
		a[mp[x]]++;
	}
	q.push(make_pair(a[mp[x]],x));
    cout<<q.top().second<<" "<<q.top().first<<endl;
	}
}
