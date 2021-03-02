#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		c=1;
		if(a[i]!=-1){
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					c++;
					a[j]=-1;
				}
			}
			b[i]=c;
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]!=-1){
			cout<<a[i]<<" : "<<b[i]<<"\n";
		}
	}
	return 0;
}