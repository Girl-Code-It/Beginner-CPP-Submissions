#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[80];
	int j=0,l;
	cout<<"Enter the string: ";
	gets(str);
	l=strlen(str)-1;
	while(j<l){
		if(str[j++]!=str[l--]){
			cout<<"Not palindrome";
			exit(0);
		}
	}
	cout<<"palindrome";
	return 0;
}
