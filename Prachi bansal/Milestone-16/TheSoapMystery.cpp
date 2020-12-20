#include<iostream>
#include<algorithm>
using namespace std;
int Bsearch(long long a[],long long k,long long t){
	int start=0,end=t-1,mid,flag=0,first;
	while(start<=end){
		mid=start+((end-start)/2);
		if(a[mid]==k){
			flag=1;
			first=mid;
			end=mid-1;
		}else{
			if(a[mid]>k){
				end=mid-1;
			}else{
				start=mid+1;
			}
		}
	}
	if(flag!=1){
		return start;
	}else{
		return first;
	}
}
int main(){
	long long t,q,k,a[100005];
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>a[i];
	}
	sort(a,a+t);
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>k;
		int count=Bsearch(a,k,t);
		cout<<count<<endl;
	}
	return 0;
}
