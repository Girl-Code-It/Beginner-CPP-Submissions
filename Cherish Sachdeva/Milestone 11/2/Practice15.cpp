#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	vector<int> v;
	int a[x],b[y];
	for(int i=0;i<x;i++){
		cin>>a[i];
		v.push_back(a[i]);
	}
	for(int i=0;i<y;i++){
		cin>>b[i];
		v.push_back(b[i]);
	}
	sort(v.begin(),v.end());
	for(auto it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
	return 0;
}