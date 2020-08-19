#include<iostream>
using namespace std;
int prime(int x, int y){
	for(int i=x;i<=y;i++){
		int isPrime=1;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				isPrime=0;
			}
		}
		if(isPrime==1){
			cout<<i<<" ";
		}
	}
	return 0;
}
main(){
	int a,b;
	cout<<"Enter the range of number: ";
	cin>>a>>b;
	cout<<"\nPrime numbers are: ";
	prime(a,b);
}
