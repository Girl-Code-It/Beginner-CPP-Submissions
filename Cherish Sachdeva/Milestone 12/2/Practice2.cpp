#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,op,sum=0;
	cin>>n>>op;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	if(op==1){
		for(int i=0;i<n;i++){
			sum+=a[i][i];
		}
		cout<<"Left diagonal sum is->"<<sum<<"\n";
	}
	else{
		for(int i=0,j=n-1;i<n;i++){
			sum+=a[i][j];
			j--;
		}
		cout<<"Right diagonal sum is->"<<sum<<"\n";
	}
	return 0;
}