#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,pos;
	cin>>n>>pos;
	int a[n];
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>a[i];
		v.push_back(a[i]);
	}
	v.erase(v.begin()+(pos-1));
	for(auto it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
	return 0;
}