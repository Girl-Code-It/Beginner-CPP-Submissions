#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	for(i=2;i<n;i++){
		if(n%i==0){
			cout<<"Non-Prime Number";
			break;
		}
	}
	if(i==n){
		cout<<"Prime Number";
	}
	return 0;
}