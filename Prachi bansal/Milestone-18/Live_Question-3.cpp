#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[n];
		long long prodt[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int lp=1;
		for(int j=0;j<n;j++){]
			prdt[j]=lp;
			lp=lp*a[j];
		}
		int rp=1;
		for(int j=n-1;j>=0;j--){
			prdt[i]=prdt*rp;
			rp=rp*a[j];
		}	
	}
	return 0;
}
