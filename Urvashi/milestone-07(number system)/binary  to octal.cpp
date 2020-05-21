#include<iostream>
using namespace std;
int main()
{
int octalconstant[]	={0, 1, 10, 11, 100 , 101, 110, 111};
long long binary , octal=0, tempbinary;
int digit, place=1, i;
cout<<"enter any binary number:"<<endl;
cin>>binary;
tempbinary=binary;
while(tempbinary!=0)
{digit=tempbinary%1000;
for(i=0;i<8;i++)
{if(octalconstant[i]==digit)
{octal+=(i*place);break;
}
}
tempbinary/=1000;
place*=10;
}
cout<<"original binary number is:"<<binary<<endl;
cout<<"octal number is:"<<octal<<endl;	
}
