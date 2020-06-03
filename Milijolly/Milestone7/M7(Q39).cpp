//C++ program to convert binary to octal number system

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>
#include <stdio.h>

using namespace std;

int main()
{ int octalconst[]={0,1,010,011,100,101,110,111};
 int sum,temp,num,place,digit;

cout<<"Enter the binary number "<<endl;
cin>>num;

 temp=num;
 place=1;
 sum=0;
 
 while(temp!=0)
 {
 	digit=temp%1000;
 	for(int i=0;i<8;i++)
        {
            if(octalconst[i] == digit)
            {
                sum =  sum +(i * place) ;
                break;
            }
 	   }
	temp=temp/1000;
	place=place*10;
	 }
 cout<<"octal number is "<<sum;
 	
 getch();
 return 0;	
}
