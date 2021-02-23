#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,ne=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			ne++;
		}
	}
	cout<<"No. of Negative elements are "<<ne<<endl;
	return 0;
}