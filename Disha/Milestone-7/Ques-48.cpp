//Write a C program to convert Hexadecimal to Binary number system.

using namespace std;
#include<iostream>
#include<string>
int main()
{
    int digit[]={0,1,10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111},num,place=1;
    long long binary=0;
    string hexa;

    cout<<" \n Enter the hexadecimal number :";
    getline(cin,hexa);
    int len=hexa.length()-1;
    while(len>=0)
    {
        if(hexa[len]>=48 && hexa[len]<=57)
        {
            num=hexa[len]-48;
        }
        else if(hexa[len]>=65 && hexa[len]<=70)
        {
            num=hexa[len]-55;
        }
        len--;
        binary+=(digit[num]*place);
        place*=10000;
    }
    cout<<"\n Binary form ="<<binary;

    return 0;
}
