#include <iostream >
#include<string.h>
using namespace std;
int main()
{
int i , length;
char binary[100], onescomp[100];
cout<<"enter bit binary value:"<<endl;
gets(binary);
length=strlen(binary);
for(i=0;i<length;i++)
{	if(binary[i]=='1')
	onescomp[i]='0';
	else if (binary[i]=='0')
	onescomp[i]='1';
}
	cout<<"orignal binary="<<binary<<endl;
	cout<<"ones complement="<<onescomp;
}
