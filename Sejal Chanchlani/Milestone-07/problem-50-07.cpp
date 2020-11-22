//program to convert hexadecimal to decimal.
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
	char hex[65];
	cout<<"enter hexadecimal number"<<endl;
	cin>>hex;
	int len=strlen(hex);
	len--;
	int val,decimal=0;
	for(int i=0;hex[i]!='\0';i++)
	{
		if(hex[i]>='0' && hex[i]<='9')
		{
			val=hex[i]-48;
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
    cout<<"decimal number -"<<decimal;
}
