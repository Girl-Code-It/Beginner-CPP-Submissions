#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main(){
	char x[10];
	int d,deci=0,j=0,l,y;
	cout<<"Enter the number: ";
	gets(x);
	l=strlen(x);
	cout<<l;
	for(int i=l-1;i>=0;i--){
		if(x[i]>='0'&& x[i]<='9'){
			y=x[i]-48;
		}else if(x[i]>='a'&& x[i]<='f'){
			y=x[i]-87;						
		} else if(x[i]>='A'&& x[i]<='F'){
			y=x[i]-55;
		} 
		deci+=y*pow(16,j);
		j++;
	}
	cout<<"\nThe decimal value is: "<<deci;
	return 0;
}
