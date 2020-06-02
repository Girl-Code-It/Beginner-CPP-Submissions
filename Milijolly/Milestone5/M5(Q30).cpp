//Write a C++ program to check whether a number is Armstrong number or not.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>
using namespace std;

int main()
{ int num,m,n,sum=0,prod=1,digits=1;

 cout<<"enter a number";
 cin>>num;
 n=num;
 m=num;

 while(n>10)
 { n=n/10;
  digits++;
 }
 	
 while(num>10)
 {
 prod=num%10;
 sum= sum + round(pow(prod,digits));
 num=num/10;
 }	

 if(m==sum)
 cout<<"its an armstrong number"<<endl;
 else
 cout<<"not an armstrong number"<<endl;
  
getch();
return 0;	
}
