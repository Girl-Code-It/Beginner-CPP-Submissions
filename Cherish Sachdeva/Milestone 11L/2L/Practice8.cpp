#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k=0;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		b[k++]=a[i];
	}
	for(int i=0;i<k;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}