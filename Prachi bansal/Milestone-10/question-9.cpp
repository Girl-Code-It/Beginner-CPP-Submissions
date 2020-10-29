#include<iostream>
using namespace std;
int factorial(int x){
	int fact=1;
	for(int i=1;i<=x;i++){
		fact=fact*i;
	}
	return fact;
}
main(){
	int a;
	cout<<"\nEnter the number: ";
	cin>>a;
	cout<<"\nfactorial of "<<a<<" is: "<<factorial(a);
}
