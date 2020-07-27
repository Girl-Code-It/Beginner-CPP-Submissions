#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int oct[]={0,1,10,11,100,101,110,111};
	int bin=0,d,place=1,n;
	cout<<"enter the octal number: ";
	cin>>n;
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
	cout<<"\nthe binary is: "<<bin;
		int j=0,ar[]={0,1,10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111};
		char hex[10];
		while(bin!=0){
			d=bin%10000;
			for(int i=0;i<16;i++){
				if(ar[i]==d){
					if(i<10){
						hex[j]=(char)(i+48);
					}else if(i>10){
						hex[j]=(char)(i+55);
					}
					j++;
				}	
			}
			bin/=10000;
			place*=10000;
		}
		hex[j]='\0';
		strrev(hex);
		cout<<"\nThe hexadecimal number is: "<<hex;
	return 0;
}
