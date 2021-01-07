//Program to convert binary into hexadecimal.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	long long binary,temp;
	int index=0,r;
	cout<<"enter binary number - "<<endl;
	cin>>binary;
	temp=binary;
	int mat[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 
                         1001, 1010, 1011, 1100, 1101, 1110, 1111};
	char hexa[20];
	while(temp!=0)
	{
		r=temp%10000;
		for(int i=0;i<16;i++)
		{
		   if(r==mat[i])
		   {
		   	if(i<10)
			   {
			   	hexa[index]=(char)(48+i);
			   }
			else
			   {
				hexa[index]=(char)(65+(i-10));
			   }
			index++;
			break;
		   }
	    }
	    temp=temp/10000;
    }
		hexa[index]='\0';
		cout<<hexa<<endl;
		strrev(hexa);		
	cout<<"hexadecimal - "<<hexa;
}

