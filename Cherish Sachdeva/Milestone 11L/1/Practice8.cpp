#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,flag=1;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i]!=a[n-1-i]){
				flag=0;
				break;
			}
		}
		if(flag==1){
			cout<<"Pallindrome Array\n";
		}else{
			cout<<"Non-Pallindrome Array\n";
		}
	}
	return 0;
}