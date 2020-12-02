#include<iostream>
using namespace std;
bool prime(int n,int i){
	if(i==n/2){
		if(n%i==0){
			return false;
		}
		return true; 
	}
	if(n%i==0){
		return false;
	}
	return prime(n,i+1);
}
int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	if(prime(n,2)==true){
		cout<<"\nIt is prime";
	}else{
		cout<<"\nIt is not a prime number";
	}
	return 0;
}
