#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0;
	cin>>n;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}else{
			continue;
		}
	}
	if(sum==n){
		cout<<"Perfect Number";
	}else{
		cout<<"Non-Perfect Number";
	}
	return 0;
}