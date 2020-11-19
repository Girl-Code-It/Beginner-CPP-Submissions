#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[80];
	int j=1;
	cout<<"Enter the string: ";
	gets(str);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==(char)(32)){
			j++;
		}
	}
	cout<<"The number of words are: "<<j;
	return 0;
}
