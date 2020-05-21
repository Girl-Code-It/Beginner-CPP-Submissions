#include<iostream>
#include<string.h>
using namespace std;
int main ()
{int i, carry=1, length;
char binary[100]	, onescomp[100] , twoscomp[100] ;
cout<<"enter bit binary value"<<endl;
gets(binary);
length=strlen(binary);
for(i=0; i<length; i++)
{	if(binary[i]=='1')
	onescomp[i]='0';
    else if(binary[i]=='0')
    onescomp[i]='1';}
for(i=length-1;i>=0;i--)
{
	if(onescomp[i]=='1' && carry==1)
	 twoscomp[i]='0';
	else if(onescomp[i]=='0'&& carry==1)
	{twoscomp[i]='1';
	carry=0;}
	else
	twoscomp[i]=onescomp[i];}
cout<<"original binary:"<<binary<<endl;
cout<<"onescomp:"<<onescomp<<endl;
cout<<"twoscomp:"<<twoscomp<<endl;	
}
