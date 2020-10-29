//Write a C++ program  to check whether a number is Perfect number or not.

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
  
  
  for(i=1;i<num;i++)
  {
   if(num%i==0)
   {
    sum=sum+i;
    }
}
 cout<<sum<<endl;
 if(sum==num)
 cout<<"It is a perfect number";
 else 
 cout<<"not a perfect number";
 
 getch();
 return 0;
}
  
