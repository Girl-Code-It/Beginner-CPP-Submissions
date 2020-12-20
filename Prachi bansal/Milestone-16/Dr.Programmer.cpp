#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int lower(long long a[],long long start,long long end,long long t){
	long long mid;
	while(start<=end){
		mid=start+((end-start)/2);
		if(a[mid]==t){
			return mid;
		}else{
			if(a[mid]>t){
				end=mid-1;
			}else{
				start=mid+1;
			}
		}
	}
	return start;
}
int upper(long long a[],long long start,long long end,long long t){
	long long mid;
	while(start<=end){
		mid=start+((end-start)/2);
		if(a[mid]==t){
			return mid;
		}else{
			if(a[mid]>t){
				end=mid-1;
			}else{
				start=mid+1;
			}
		}
	}
	return end;
}
int co(long long x[],long long y[],long long z,long long l1,long long r1,long long l2,long long r2){
	int count=0,dis;
	for(int i=l1;i<=r1;i++){
		for(int j=l2;j<=r2;j++){
			dis=sqrt(pow(x[i],2) + pow(y[j],2));
			cout<<dis<<endl;
			if(dis<=z){
				count++;
			}else{
				break;
			}
		}
	}
	return count;
}
int main(){
	long long n,m,q;
	cin>>n>>m>>q;
	long long x[100001],y[100001];
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	for(int i=0;i<m;i++){
		cin>>y[i];
	}
	sort(x,x+n);
	sort(y,y+m);
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<x[i]<<" ";
	}
	for(int i=0;i<m;i++){
		cout<<y[i]<<" ";
	}
	char ch;
	long long z,l1,r1,l2,r2;
	int count,a,b,c,d;
	while(q>0){
		cin>>z>>ch;
		if(ch=='A'){
			cin>>l1>>r1;
	   	    l1=lower(x,0,n-1,l1);
		    r1=upper(x,0,n-1,r1);
		    cout<<l1<<" "<<r1<<endl;
		    count= co(x,y,z,l1,r1,0,m-1);
		    
		}else if(ch=='B'){
		    cin>>l2>>r2;
		    l2=lower(y,0,n-1,l2);
		    r2=upper(y,0,n-1,r2);
		    cout<<l2<<" "<<r2<<endl;
		    count= co(x,y,z,0,n-1,l2,r2);
			
		}else if(ch=='C'){
			cin>>l1>>r1>>l2>>r2;
		    l1=lower(x,0,n-1,l1);
		    r1=upper(x,0,n-1,r1);
		    l2=lower(y,0,n-1,l2);
		    r2=upper(y,0,n-1,r2);
		    cout<<l1<<" "<<r1<<" "<<l2<<" "<<r2<<endl;
		    count= co(x,y,z,l1,r1,l2,r2);
		}
		cout<<count<<endl;
		q--;
	}
	return 0;
}
