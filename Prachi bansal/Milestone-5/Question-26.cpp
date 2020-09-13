#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter a number: ";
	cin>>x;
	if(x==1){
		cout<<"\nIt is not prime nor composite";
	}
	int prime=0;
	for(int i=2;i<=x/2;i++){
		if(x%i==0){	
		prime=1;
	}
	}
	if(prime==1){
		cout<<"\nIt is not prime"; 
	}else{
		cout<<"\nIt is prime";
	}
	
	return 0;
}
