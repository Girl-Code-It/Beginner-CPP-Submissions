#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main(){
	char n[5];
	int bin=0,place=1;
	cout<<"Enter the hexadecimal number: ";
	gets(n);
	cout<<"\nThe binary number is: ";
	
	for(int i=0;n[i]!='\0';i++){
		bin=bin*place;
		switch(n[i]){
			case '0':
                bin += 0;
                break;
            case '1':
                bin += 1;
                break;
            case '2':
                bin += 10;
                break;
            case '3':
                bin += 11;
                break;
            case '4':
                bin += 100;
                break;
            case '5':
                bin += 101;
                break;
            case '6':
                bin += 110;
                break;
            case '7':
                bin += 111;
                break;
            case '8':
                bin += 1000;
                break;
            case '9':
                bin += 1001;
                break;
            case 'a':
            case 'A':
                bin += 1010;
                break;
            case 'b':
            case 'B':
                bin += 1011;
                break;
            case 'c':
            case 'C':
                bin += 1100;
                break;
            case 'd':
            case 'D':
                bin += 1101;
                break;
            case 'e':
            case 'E':
                bin += 1110;
                break;
            case 'f':
            case 'F':
                bin += 1111;
                break;
            default:
                cout<<"Invalid hexadecimal input.";
        }
        place*=10000;
	}
	cout<<bin;
	int j=0,d,octal[]={0,1,10,11,100,101,110,111};
	int oct=0;
	int p=1;
	cout<<"\nThe octal number is: ";
	while(bin!=0){
		d= bin%1000;
		for(int i=0;i<8;i++){
			if(octal[i]==d){
				oct=oct*p+i;
			}
		}
		p=p*10;
		bin/=1000;
	}
	cout<<oct;
	return 0;
}
