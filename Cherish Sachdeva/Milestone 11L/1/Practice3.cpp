#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p=0,e=0,o=0,ne=0,z=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]>0 && arr[i]%2==0){
			p++;
			e++;
		}else if(arr[i]>0 && arr[i]%2!=0){
			p++;
			o++;
		}else if(arr[i]<0 && arr[i]%2==0){
			ne++;
			e++;
		}else if(arr[i]<0 && arr[i]%2!=0){
			ne++;
			o++;
		}else if(arr[i]==0){
			z++;
		}
	}
	cout<<"Positive: "<<p<<endl<<"Negative: "<<ne<<endl<<"Even: "<<e<<endl<<"Odd: "<<o<<endl<<"Zero: "<<z;
	return 0;
}