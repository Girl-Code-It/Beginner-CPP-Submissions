#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=3;i<=8;i++){
		for(int j=i;j<=8;j++){
			cout<<a[j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}