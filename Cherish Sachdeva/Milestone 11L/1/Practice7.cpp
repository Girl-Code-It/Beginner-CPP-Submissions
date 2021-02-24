#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,maxno,minno;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	maxno=INT_MIN;
	minno=INT_MAX;
	for(int i=0;i<n;i++){
		maxno=max(maxno,arr[i]);
		minno=min(minno,arr[i]);
	}
	cout<<"Maximum number is "<<maxno<<endl<<"Minimum number is "<<minno;
	return 0;
}