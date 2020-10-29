#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int i=0,n,d,deci=0;
	cout<<"Enter the octal number: ";
	cin>>n;
	cout<<"\nThe decimal number is: ";
	while(n!=0){
		d=n%10;
		deci+=d*pow(8,i);
		n/=10;
		i++;
	}
	cout<<deci;
	return 0;
	
}
