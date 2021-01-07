//Program to convert octal to hexadecimal.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int mat[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 
                         1001, 1010, 1011, 1100, 1101, 1110, 1111};
	int octal,temp,place=1,binary=0,r;
	cout<<"enter octal number"<<endl;
	cin>>octal;
	temp=octal;
	int index=0;
	char hexa[20];
	while(temp!=0)
	{
		r=temp%10;
		binary=(mat[r]*place)+binary;
		place=place*1000;
		temp=temp/10;
	}
	//cout<<"hexadecimal number - "<<binary<<endl;
	while(binary!=0)
	{
		r=binary%10000;
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
		binary=binary/10000;
	}
	hexa[index]='\0';
	strrev(hexa);
	cout<<"Hexadecimal - "<<hexa<<endl;
	
}
