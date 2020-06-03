//Write a C++ program to calculate factorial of a number

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 
#include<math.h>

using namespace std;


int main()
{  int i,num,fact=1; 

  cout<<"enter the  number "<<endl;
  cin>>num;
  
  for(i=1;i<=num;i++)
  { fact=fact*i;
    }
    
    cout<<"factorial of the number is "<<fact;
    
    getch();
    return 0;
    
}
    
    
