#include<iostream>
using namespace std;
int main(){
	long long n,q,a[10001],x;
	cin>>n>>q;
	long long sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
		a[i]=sum;
	}
	for(int i=0;i<q;i++){
		cin>>x;
		int start=0,end=n-1,mid,flag=0;
		while(start<=end){
			mid=start+((end-start)/2);
			if(a[mid]==x){
				cout<<mid+1<<endl;
				flag=1;
				break;
			}else{
				if(a[mid]>x){
					end=mid-1;
				}else{
					start=mid+1;
				}
			}
		}
		if(flag!=1){
			cout<<start+1<<endl;
		}
	}
	return 0;
}
