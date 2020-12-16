#include<iostream>
using namespace std;
int main(){
	long long n,q,k,a[100001];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	for(int i=0;i<k;i++){
		cin>>q;
		long long sum=0,ctr;
		for(int j=n-1;j>=0;j--){
			if(sum<q){
				sum+=a[j];
				ctr=j;
			}
		}
		if(ctr%2==0){
			cout<<"A"<<endl;
		}else{
			cout<<"B"<<endl;
		}
	}
	return 0;
}
