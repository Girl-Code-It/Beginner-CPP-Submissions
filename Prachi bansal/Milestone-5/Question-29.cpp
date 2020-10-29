#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter the number: ";
	cin>>x;
	cout<<"\nPrime factors are: ";
	for(int i=2;i<=x;i++){
		int prime=1;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				prime=0;
				break;
			}
		}
		if(prime==1){
			if(x%i==0){
				cout<<i<<" ";
			}
		}
	}
	return 0;
}
