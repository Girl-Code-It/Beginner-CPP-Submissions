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
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j>=i && j<n){
				cout<<a[i][j];
			}else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}