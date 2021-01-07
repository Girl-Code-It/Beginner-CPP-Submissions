#include<iostream>
using namespace std;

int ksum(int a[],int n){
	int sum=0,best=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
		if(sum<0){
			sum=0;
		}
		if(best<sum){
			best=sum;
		}
	}
	return best;
}
int k2sum(int n,int a[],int k){
	int m=2*n,j=0;
	int b[m];
	while(k--){
		for(int i=0;i<n;i++){
			b[j]=a[i];
			j++;
		}
	}
	cout<<j<<" ";
	return ksum(b,j);
}
int sum_of_array(int a[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	return sum;
}
int main(){
	int n,k,t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[100001];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(k==1){
			cout<<ksum(a,n);	
		}else{
			int sum=sum_of_array(a,n);
			if(sum>=0){
				cout<<k2sum(n,a,2)+(k-2)*sum;
			}else{
				cout<<k2sum(n,a,2);
			}
		}	
	}
	return 0;
}
