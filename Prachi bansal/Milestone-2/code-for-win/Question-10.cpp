#include<iostream>
using namespace std;
int main(){
	int x,n,d,i=0;
	cout<<"Enter the number: ";
	cin>>x;
	n=x;
	while(n!=0){
		d=n%10;
		i++;
		n/=10;
	}
	cout<<"Total digits in the number is: "<<i;
	return 0;
}
