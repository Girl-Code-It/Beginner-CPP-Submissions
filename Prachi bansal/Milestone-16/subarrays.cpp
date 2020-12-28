#include<iostream>
using namespace std;
int main(){
	long long t,n,k,a[100001],b[100001];
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n>>k;
		int ctr=0;
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		int d=0;
		while(d<n){
			for(int j=d;j<=n-1;j++){
				int sum=0;
				for(int l=d;l<=j;l++){
					sum+=a[l];
					//cout<<a[l];
				}
				//cout<<endl;
				//cout<<sum<<endl;
				b[ctr]=abs(sum);
				ctr++;
			}
			d++;	
		}
		sort(b,b+ctr);
		for(int j=0;j<ctr;j++){
			if(b[j]<=k){
				count++;
			}else{
				break;
			}
		}
		cout<<ctr-count<<endl;
	}
	return 0;
}
