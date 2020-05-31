//Write a C program to find LCM of two numbers.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 
#include<math.h>

using namespace std;


int main()
{  int i,n1,n2,prod,lcm=1; 

  cout<<"enter the  numbers "<<endl;
  cin>>n1;
  cin>>n2;
  
  prod= n1*n2;
  
  for(i=1;i<=prod;i++)
  { if(i%n1==0&&i%n2==0)
    {
    cout<<i;
    break;}
  }
    
    getch();
    return 0;  
}
    
