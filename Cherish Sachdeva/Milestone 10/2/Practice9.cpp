#include<bits/stdc++.h>
using namespace std;

bool perfect(int n){
	int sum=0;
	int a=n;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==a){
		return true;
	}else{
		return false;
	}
}

int main(){
	int i,a,b;
	cin>>a;
	cin>>b;
	for(i=a+1;i<b;i++){
		if(perfect(i)){
			cout<<i<<endl;
		}
	}
	return 0;
}