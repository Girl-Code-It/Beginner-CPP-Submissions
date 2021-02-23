#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,e=0,o=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			e++;
		}else{
			o++;
		}
	}
	cout<<"Even elements are "<<e<<endl<<"Odd elements are "<<o;
	return 0;
}