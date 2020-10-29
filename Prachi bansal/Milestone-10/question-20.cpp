#include<iostream>
using namespace std;
int eo(int x){
	if(x%2==0){
		cout<<"Even";
	}else{
		cout<<"Odd";
	}
}
main(){
	int a;
	cout<<"Enter the number: ";
	cin>>a;
	eo(a);
}
