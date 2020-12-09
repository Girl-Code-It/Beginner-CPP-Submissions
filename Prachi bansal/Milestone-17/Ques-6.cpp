#include<iostream>
using namespace std;
int sum=0;
int s(int n){
	if(n==0){
		return sum;
	}
	sum+=n%10;
	return s(n/10);
}
int main(){
	int n;
	cout<<"Input number: ";
	cin>>n;
	int d=s(n);
	cout<<"The sum of digits in the number is : "<<d;
	return 0;
}
