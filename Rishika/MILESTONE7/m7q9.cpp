//q9- wap to convert decimal to binary number system.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int dec,bin[32],i=0,j,n;
   cout<<"Enter a decimal number = ";
   cin>>dec;
   while(dec!=0)
   {
   	bin[i]=dec%2;
   	dec=dec/2;
   	i++;
   }
   //to print string in rev order
   cout<<"Binary converted number is = ";
   for(j=i-1;j>=0;j--)
   {
   	cout<<bin[j];
   }
	
} 
