#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long n,q,x,a[100001];
	cin>>n>>q;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<q;i++){
		cin>>x;
		int flag=0;
		long long start=0,end=n-1;
		while(start<=end){
			long long mid=start+((end-start)/2);
			if(a[mid]==x){
				flag=1;
				cout<<"YES"<<endl;
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
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
