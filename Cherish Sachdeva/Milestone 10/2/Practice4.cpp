#include<bits/stdc++.h>
using namespace std;
bool type(int n){
	if(n%2==0){
		return true;
	}else{
		return false;
	}
}
int main(){
	int a;
	cin>>a;
	if(type(a)){
		cout<<"Even";
	}else{
		cout<<"Odd";
	}
	return 0;
}