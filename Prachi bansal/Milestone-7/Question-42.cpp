#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int bin=0;
	int n, oct[]={0,1,10,11,100,101,110,111};
	int d,place=1;
	cout<<"enter the octal number: ";
	cin>>n;
	cout<<"\nThe binary number is: ";
	while(n!=0){
		d=n%10;
		for(int i=0;i<8;i++){
			if(i==d){
				bin=(oct[i]*place)+bin;
			}
		}
		n/=10;
		place*=1000;
	}	
	cout<<bin;
	return 0;
}
