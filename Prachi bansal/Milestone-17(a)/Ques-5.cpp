#include<iostream>
using namespace std;
int i=0;
int count(int n){
	if(n==0){
		return i;
	}
	i++;
	return count(n/10);
}
int main(){
	int n;
	cout<<"Input number: ";
	cin>>n;
	int d=count(n);
	cout<<"The number of digits in the number is : "<<d;
	return 0;
}
