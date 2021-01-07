#include<iostream>
using namespace std;
int main(){
	int t,p,a[100],b;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>a[i];
	}
	cin>>p;
	for(int i=0;i<p;i++){
		cin>>b;
		int ctr=0,sum=0;
		for(int j=0;j<t;j++){
			if(a[j]<=b){
				sum+=a[j];
				ctr++;
			}
		}
		cout<<ctr<<" "<<sum;
	}
	return 0;
}
