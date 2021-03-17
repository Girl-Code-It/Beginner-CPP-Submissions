#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=(n-1)/2,j=0;j<n;j++){
		cout<<a[i][j]<<" ";
	}
	cout<<"\n";
	for(int j=(n-1)/2,i=0;i<n;i++){
		cout<<a[i][j]<<" ";
	}
	return 0;
}