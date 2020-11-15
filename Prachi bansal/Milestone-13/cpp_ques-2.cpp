#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[80];
	cout<<"Enter the string: ";
	gets(str);
	cout<<"The reversed string is: ";
	puts(strrev(str));
	return 0;
}
