#include<iostream>
#include <math.h>                                  //if we are using pow() function.
#include <string.h>                               //if we are using strings.
 using namespace std;
 int main()
 {
     char hex[17];
     long int num, i, sum=0, j=0;
     cout<<"enter a hexadecimal number : ";
     cin>>hex;
     j=strlen(hex) - 1;                           //strlen() is used for finding the length of a string.
     cout<<"decimal number : ";
     for(i=0; hex[i]!='\0'; i++)
     {
        if(hex[i]>='0' && hex[i]<='9')
        {
            num = hex[i] - 48;                //num is stored in int data type which converts hex[i] into its ascii value.
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            num = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            num = hex[i] - 65 + 10;
        }
         sum+=num*pow(16,j);                 //as we are starting from left side. j is decremented.
         j--;
     }
     cout<<sum;
 }
