//Write a C++ program to print all Armstrong numbers between given interval using functions 31

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>
using namespace std;


void armstrong(int start,int n)
{
	int sum,prod,temp,digits;


for(int k=1;k<=n;k++)
{ sum=0;prod=1;digits=1;
  temp=k;
 
 while(temp>10)
 { temp=temp/10;
  digits++;
 }
 temp=k;	
 while(temp>10)
 {
 prod=temp%10;
 sum= sum + round(pow(prod,digits));
 temp=temp/10;
 }	

 if(k==sum&&k>=start&&k<=n)
 cout<<k<<endl;
 
  
} }

int main()
{  int num,m;

   cout<<"enter the starting and ending number"<<endl;
   cin>>m>>num;
   armstrong(m,num);
   
   getch();
   return 0;
}
