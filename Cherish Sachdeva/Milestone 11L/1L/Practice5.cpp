#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0,pro=1;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		sum+=arr[i];
		pro*=arr[i];
	}
	cout<<"Sum is "<<sum<<endl<<"Product is "<<pro;
	return 0;
}
