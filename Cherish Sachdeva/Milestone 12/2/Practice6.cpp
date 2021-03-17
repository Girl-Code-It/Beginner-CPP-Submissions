#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int a[m][n],b[m][n],c[m][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>b[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]=b[i][j]+a[i][j];
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}