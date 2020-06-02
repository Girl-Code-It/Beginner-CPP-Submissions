//Write a program to find the sum and product of all elements of an array. 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;


int main()
{ int a[10],sum=0,prod=1;

 cout<<"Enter 10 intergers "<<endl;
 for(int i=0;i<10;i++)	
  {
    cin>>a[i];
    prod*=a[i];
    sum+=a[i];   }
  
  cout<<"SUM IS "<<sum<<endl; 
  cout<<"PRODUCT IS "<<prod<<endl; 

	getch();
	return 0;
}
