#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
	char str[80];
	cout<<"Enter the string:";
	gets(str);
	for(int i=0;str[i]!='\0';i++){
		str[i]=toupper(str[i]);
	}
	cout<<"String in uppercase is: ";
	cout<<endl;
	puts(str);
	return 0;
}
