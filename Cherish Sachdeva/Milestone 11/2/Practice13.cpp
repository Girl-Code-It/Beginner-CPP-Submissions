#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a2;
	cin>>n;
	set<int> s;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		s.insert(a[i]);
	}
	a2=s.size();
	cout<<n-a2;
	return 0;
}