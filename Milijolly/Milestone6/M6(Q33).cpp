//Write a C++ program to print all Perfect numbers between 1 to n

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>
using namespace std;

int main()
{  
    int i,num,sum=0; 

  cout<<"enter the  number "<<endl;
  cin>>num;
  
  for(int j=1;j<num;j++)
  {sum=0;
   for(i=1;i<j;i++)
   {
   if(j%i==0)
   {
    sum=sum+i;
    }
   }
 
 if(sum==j)
 {
 cout<<j;} }
 
 getch();
 return 0;
}
  
