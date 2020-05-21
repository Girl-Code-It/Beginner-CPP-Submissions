#include<iostream>
#include<string.h>
using namespace std;
 int main ()
 {
 int hexconstant[]	={0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111};
 long long binary, tempbinary;
 char hex[20];
 int index, i, digit;
 cout<<"enter binary number:";
 cin>>binary;
 tempbinary=binary;
 index=0;
 while(tempbinary!=0)
 {digit=tempbinary%10000;
 for(i=0;i<16;i++)
 {if(hexconstant[i]==digit)
 {if(i<10)
 {hex[index]=(char)(i+48);}
 else{hex[index]=(char)((i-10) +65);}
 index++;
 break;}}
 tempbinary/=10000;	
 }hex[index]='\0';
 strrev(hex);
 cout<<"binary number="<<binary<<endl;
 cout<<"hexadecimal number="<<hex;
 }
