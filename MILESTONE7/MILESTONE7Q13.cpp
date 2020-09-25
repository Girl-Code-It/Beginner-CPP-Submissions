// PROGRAM TO CONVERT HEXADECIMAL INTO OCTAL
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int main ()
{

    long i,y,hexa[20],binary[20],rem,octal=0,z=0,temp=1,w=0;
    char input[20];

    cout<<"Enter any Hexadecimal Number: ";
    gets(input);
    for(y=0;input[y]!='\0';y++);
    for(i=y-1;i>=0;i--)
    {
        if(input[i]>='A'&&input[i]<='F')
            hexa[i]=input[i]-55;
        else if(input[i]>='a')
            hexa[i]=input[i]-87;
        else
            hexa[i]=input[i]-48;
        for(int y=0;y<4;y++)
        {
            rem=hexa[i]%2;
            hexa[i]/=2;
            binary[z++]=rem;
        }
    }
    for(i=0;i<z;)
    {
        for(y=0;y<3;y++)
        {
            if(i>=0)
             octal+=binary[i++]*pow(2,y);
        }
       w+=octal*temp;
       octal=0;
       temp*=10;
    }
    cout<<"Equivalent Octal Number is: "<<w;

   return 0;
}
