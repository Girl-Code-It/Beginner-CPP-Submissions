#include<iostream>
using namespace std;
int main(){
	long long m,n,k,b[101][501]={0},ctr=0,a[10001],q;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		q=a[i]-1;
		int flag=0;
		for(int j=0;j<k;j++){
			if(b[q][j]==0){
				b[q][j]++;
				flag=1;
				break;
			}
		}
		if(flag!=1){
			ctr++;
		}
	}
	cout<<ctr;
	return 0;
}


