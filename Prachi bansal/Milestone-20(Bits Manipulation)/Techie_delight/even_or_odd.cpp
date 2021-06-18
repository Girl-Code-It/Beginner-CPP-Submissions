#include<iostream>
using namespace std;
int main(){
	unsigned long long int n;
	cin>>n;
	if(n&1==1){
		cout<<"Odd";
	}else{
		cout<<"Even";
	}
	return 0;
}
