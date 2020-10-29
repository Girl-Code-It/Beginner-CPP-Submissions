#include<iostream>
#include<stdio.h>
using namespace std ;
int main(){
	char x[9],y[9];
	cout<<"\nenter the binary number: ";
	gets(x);
	cout<<"\nthe 1s compliment is: ";
	for(int i=0; i<9;i++){
		if(x[i] == '1'){
			y[i]='0';
		}else{
			y[i]='1';
		}
	}
	y[8] ='\0';
	puts(y);
	
	return 0;
}
