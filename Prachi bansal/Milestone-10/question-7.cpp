#include<iostream>
using namespace std;
int isPrime(int x){
	int isPrime=1;
	for(int i=1;i<=x/2;i++){
		if(x%i==0){
			isPrime=1;
		}else{
			isPrime=0;
		}
	}
	if(isPrime==1){
		cout<<"\nNot prime";
	}else{
		cout<<"\nPrime";
	}
}
main(){
	int a;
	cout<<"Enter the number: ";
	cin>>a;
	isPrime(a);
}
