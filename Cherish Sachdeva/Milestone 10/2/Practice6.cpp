#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int a,b,i;
	cin>>a;
	cin>>b;
	for(i=a+1;i<b;i++){
		if(prime(i)){
			cout<<i<<endl;
		}
	}
	return 0;
}