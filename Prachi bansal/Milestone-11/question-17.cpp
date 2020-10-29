//sum of digits
#include<iostream>
using namespace std;
int main(){
	int n,d,sum=0;
	cout<<"Enter the number: ";
	cin>>n;
	while(n!=0){
		d=n%10;
		sum+=d;
		n/=10;
	}
	cout<<"Sum of digits is: "<<sum;
	return 0;
}
