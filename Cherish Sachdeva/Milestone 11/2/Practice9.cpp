#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,val,pos;
	vector<int> v;
	cin>>n>>val>>pos;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		v.push_back(a[i]);
	}
	v.insert(v.begin()+(pos-1),val);
	for(auto it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
	return 0;
}