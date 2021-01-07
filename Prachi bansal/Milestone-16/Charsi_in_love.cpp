#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long a[n];
	for(int i=1;i<=n;i++){
		a[i-1]=i*(i+1)/2;
	}
	int flag=0;
	for(int i=0;i<n/2;i++){
		long long q=n-a[i]; 
		int mid,start=i,end=n-1;
		while(start<=end){
			mid=start+((end-start)/2);
			if(a[mid]==q){
				flag=1;
				cout<<"YES";
				exit(0);
			}else{
				if(a[mid]>q){
					end=mid-1;
				}else{
					start=mid+1;
				}
			}
		}
	}
	if(flag!=1){
		cout<<"NO";
	}
	return 0;
}
