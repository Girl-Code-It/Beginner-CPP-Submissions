#include<iostream>
using namespace std;
int main(){
	char str[20];
	int m,l,flag=1,i;
	cin>>m;
	for(int k=0;k<m;k++){
		cin>>l;
		cin>>str;
		char str2[20]="0";
		for(i = 0; str[i]!='\0'; i++)
    	{
        	switch(str[i]){
        		case 'A':str2[i]='T';
        		break;
        		case 'T':str2[i]='A';
        		break;
        		case 'G':str2[i]='C';
        		break;
        		case 'C':str2[i]='G';
        		break;
        		default: flag=0;
        		break;
			}
    	}
        str2[i]='\0';
		if(flag==1){
			puts(str2);
		}else{
			cout<<"Error RNA nucleobases found!";
		}
	}
	return 0;
}
