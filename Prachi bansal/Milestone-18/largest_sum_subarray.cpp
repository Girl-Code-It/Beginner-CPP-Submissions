#include<iostream>
using namespace std;
int main(){
	int n,best=0,sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		sum+=a[i];
		if(sum<0){
			sum=0;
		}
		if(best<sum){
			best=sum;
		}
	}
	cout<<best;
	return 0;
}
