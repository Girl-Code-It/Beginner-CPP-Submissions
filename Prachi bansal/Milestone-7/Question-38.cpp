#include<iostream>
using namespace std;
int main(){
	char x[9], y[9], z[9];
	int carry=1;
	cout<<"Enter the binary number: ";
	gets(x);
	for(int i=0;i<8;i++){
		if(x[i]=='0'){
			y[i]='1';
		}else{
			y[i]='0';
		}
	}
	y[8]='\0';
	for(int i=7;i>=0;i--){
		if(y[i]=='1' && carry==1){
			z[i]='0';
		}else if(y[i]=='0' && carry ==1){
			carry=0;
			z[i]='1';
		}else{
			z[i]=y[i];
		}
	}
	z[8]='\0';
	puts(z);
	return 0;
}
