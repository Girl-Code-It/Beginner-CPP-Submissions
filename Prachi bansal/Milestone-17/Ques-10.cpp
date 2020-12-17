#include<iostream>
using namespace std;
int fact(int n){
	if(n==1){
		return n;
	}
	return n*fact(n-1);
}
int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	int f=fact(n);
	cout<<"Factorial is: "<<f;
	return 0;
}
