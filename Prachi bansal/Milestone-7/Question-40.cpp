#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long x,n;
	int i=-1,d,bin=0;
	cout<<"Enter the binary number: ";
	cin>>x;
	n=x;
	while(n!=0){
		d=n%10;
		i++;
		bin+=d*pow(2,i);
		n/=10;
	}
	cout<<bin;
	return 0;
}
