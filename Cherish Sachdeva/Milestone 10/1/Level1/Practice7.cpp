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
	int x;
	cin>>x;
	if(prime(x)){
		cout<<"Prime";
	}else{
		cout<<"Non-Prime";
	}
	return 0;
}