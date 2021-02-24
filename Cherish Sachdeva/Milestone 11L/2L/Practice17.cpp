#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k1=0,k2=0;
	cin>>n;
	int a[n],e[n],o[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			e[k1++]=a[i];
		}else{
			o[k2++]=a[i];
		}
	}
	for(int i=0;i<k1;i++){
		cout<<e[i]<<" ";
	}
	cout<<"\n";
	for(int i=0;i<k2;i++){
		cout<<o[i]<<" ";
	}

	return 0;
}