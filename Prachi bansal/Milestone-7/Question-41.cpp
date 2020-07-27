#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main(){
	long long x,n;
	int d,j=0;
	char hex[20];
	int ar[]={0,1,10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111};
	cout<<"enter thje binary number: ";
	cin>>x;
	n=x;
	while(n!=0){
		d=n%10000;
		for(int i=0;i<16;i++){
			if(ar[i]==d){
				if(i<10){
					hex[j]=(char)(i+48);	
				}else if(i>10){
					hex[j]=(char)(i+55);
				}		
			}
		}
		j++;
		n/=10000;
	}
	hex[j]='\0';
	strrev(hex);
	puts(hex);
	return 0;
}
