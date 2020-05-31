//Milestone 2
//19.Write a C program to find sum of all odd numbers between 1 to n.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{int i,n,sum=0;
 cout<<"enter the limit"<<endl;
 cin>>n;
  
  for(i=1;i<=n;i++)
  {
   if(i%2!=0)
    { sum=sum+i;
    }}
  cout<<"sum of odd numbers "<<sum;
 	
	 getch();
	return 0;
 
}
