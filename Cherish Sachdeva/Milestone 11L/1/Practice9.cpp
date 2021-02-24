#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c=0,d=0;
	cin>>n;
	int a[n],arr1[n],arr2[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k=n/2;
	for(int i=0;i<n;i++){
		if(i<k){
			arr1[c++]=a[i];
		}else{
			arr2[d++]=a[i];
		}
	}
	for(int i=0;i<c;i++){
		cout<<arr1[i]<<" ";
	}
	cout<<"\n";
	for(int i=0;i<d;i++){
		cout<<arr2[i]<<" ";
	}
	return 0;
}