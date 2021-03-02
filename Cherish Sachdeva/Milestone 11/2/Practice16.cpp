#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i=0;
	cin>>n;
	int a[n],j=n-1;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	while(i<=j){
		swap(a[i],a[j]);
		i++;
		j--;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}