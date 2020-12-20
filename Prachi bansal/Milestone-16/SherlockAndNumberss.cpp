#include<iostream>
using namespace std;
int Bsearch(long long b[], int a,long long n){
	int start=0,end=n-1;
	while(start<=end){
		int mid=start+((end-start)/2);
		if(b[mid]==a){
			return mid;
		}else{
			if(b[mid]>a){
				end=mid-1;
			}else{
				start=mid+1;
			}
		}
	}
}
int main(){
	long long n,k,p,t,a[100001],b[100001];
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n>>k>>p;
		for(int m=0;m<n;m++){
			b[m]=m+1;
		}
		for(int j=0;j<k;j++){
			cin>>a[j];
			int index=Bsearch(b,a[j],n);
			for(int l=index;l<n;l++){
				b[l]=b[l+1];
			}
		}
		if(p>n-k){
			cout<<-1<<endl;
		}else{
			cout<<b[p-1]<<endl;
		}
	}
	return 0;
}
