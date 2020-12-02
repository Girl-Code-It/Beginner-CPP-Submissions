//program to convert hexadecimal to octal number.
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	char hex[65];
	cout<<"enter hexadecimal number"<<endl;
	cin>>hex;
	long decimal,val;
	int len=strlen(hex);
	len--;
	for(int i=0;hex[i]!='\0';i++)
	{
		 if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(16, len);
        len--;
    }
    
    int octal=0,place=1,r;
    while(decimal!=0)
    {
    	r=decimal%8;
    	octal=(r*place)+octal;
    	decimal=decimal/8;
    	place=place*10;
	}
	cout<<"Octal- "<<octal;
	}
	


