//Write a C++ program to print all perfect numbers between given interval using functions

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>
using namespace std;

void perfect(int start,int num)
{ int sum,i;
 for(int j=1;j<num;j++)
  {sum=0;
   for(i=1;i<j;i++)
   {
   if(j%i==0)
   {
    sum=sum+i;
    }
   }
 
 if(sum==j&&sum>=start&&sum<=num)
 {
 cout<<j;} }
 
}




int main()
{int n,m;

   cout<<"enter the starting and ending number"<<endl;
   cin>>m>>n;
   perfect(m,n);
   
   getch();
   return 0;
}
