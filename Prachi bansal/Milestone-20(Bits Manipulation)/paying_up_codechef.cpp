#include<iostream>
using namespace std;
int filterChars(int a[],int no){
	int i=0,sum=0;
	while(no>0){
		(no&1)?sum+=a[i]:sum=sum;
		i++;
		no=no>>1;
	}
	return sum; 
}
int generateSubsets(int a[],int n,int k){
	int range = (1<<n)-1;
	for(int i=0;i<=range;i++){
		int sum=filterChars(a,i);
		if(sum==k){
			cout<<"Yes";
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int flag=generateSubsets(a,n,k);
		if(flag==1){
			cout<<"No";
		}
	}
	return 0;
}
