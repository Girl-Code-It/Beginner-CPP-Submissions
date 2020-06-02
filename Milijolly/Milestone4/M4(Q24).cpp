//Write a C++ program to calculate HCF of numbers

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 
#include<math.h>

using namespace std;


int main()
{  int i,n1,n2,min,hcf=1; 

  cout<<"enter the  numbers "<<endl;
  cin>>n1;
  cin>>n2;
  
  min=(n1<n2)?n1:n2;
  for(i=1;i<=min;i++)
  { if(n1%i==0&&n2%i==0)
    hcf=i;
  }
    cout<<"hcf is "<<hcf;
    getch();
    return 0;  
}
    
    


