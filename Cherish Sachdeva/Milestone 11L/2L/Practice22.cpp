#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	cin>>n>>t;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	while(t--){
		for(int i=n-1;i>0;i--){
			swap(a[i],a[i-1]);
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}