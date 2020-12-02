#include<iostream>
#include<math.h>
using namespace std;
int i=0;
long long b=0;
long long bin(int n){
	if(n==1){
		return b+(n%2)*pow(10,i);
	}
	b+=(n%2)*pow(10,i);
	i++;
	return bin(n/2);
}
int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	long long b=bin(n);
	cout<<"Binary : "<<b<<endl;
	return 0;
}
