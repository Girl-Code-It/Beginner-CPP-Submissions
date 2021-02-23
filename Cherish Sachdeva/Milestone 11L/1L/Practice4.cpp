#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,j;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	j=0;
	for(int i=n-1;i>=0;i--){
		b[j]=a[i];
		j++;
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<endl;
	}
	return 0;
}