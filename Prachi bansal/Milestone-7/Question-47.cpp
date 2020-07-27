#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n,d,j=0;
	char hex[10], ar[]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	cout<<"enter the decimal number: ";
	cin>>n;
	while(n!=0){
		d=n%16;
		hex[j]=ar[d];
		j++;
		n/=16;	
	}
	hex[j]='\0';
	strrev(hex);
	cout<<hex;
	return 0;
}
