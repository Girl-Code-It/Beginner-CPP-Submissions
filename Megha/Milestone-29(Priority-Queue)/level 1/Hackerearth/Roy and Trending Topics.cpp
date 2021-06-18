//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/roy-and-trending-topics-1/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll n;
	cin>>n;
	ll id,score,p,l,c,s;
	priority_queue<pair<ll,pair<ll,ll>>> q;

	for(ll i=0;i<n;i++){
		cin>>id>>score>>p>>l>>c>>s;
		ll x = p*50 + l*5 + c*10 + s*20;
		ll temp = x - score;
		q.push({temp,{id,x}});
	}

	for(ll i=0;i<5;i++){
		pair<ll,ll> p = q.top().second;
		q.pop();
		cout<<p.first<<" "<<p.second<<endl;
	}
}

