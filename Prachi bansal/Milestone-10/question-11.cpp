#include<iostream>
using namespace std;
int primefact(int x){
	int isPrime;
	for(int i=2;i<=x;i++){
		if(x%i==0){
			isPrime=0;
			for(int j=2;j<=i/2;j++){
				if(i%j==0){
					isPrime=1;
					break;
				}else{
					isPrime=0;
					break;
				}
			}
			if(isPrime==0){
				cout<<i<<" ";
			}
		}
	}
}
main(){
	int a;
	cout<<"Enter the number: ";
	cin>>a;
	primefact(a);
}
