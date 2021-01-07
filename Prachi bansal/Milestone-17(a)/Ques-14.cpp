#include<iostream>
using namespace std;
int evenOdd(int i,int n){
	if(i>n){
		return 0;
	}
	cout<<i<<" ";
	return evenOdd(i+2,n);
}
int main(){
	int n;
	cout<<"Input range from 1: ";
	cin>>n;
	cout<<"Odd values are: "<<endl;
	evenOdd(1,n);
	cout<<"\nEven values are: "<<endl;
	evenOdd(2,n);
	return 0;
}
