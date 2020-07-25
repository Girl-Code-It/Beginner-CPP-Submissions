#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char x[10];
	int l,y;
	cout<<"Enter the number: ";
	gets(x);
	l=strlen(x);
	y=x[0];
	x[0]=x[l-1];
	x[l-1]=y;
	cout<<"\nThe number after swaping is: ";
	puts(x);
	return 0;
}
